#ifndef	_BODY_
#define _BODY_


class Body {            // part of the decorator

 	protected: std::string _description;

	Body() : 
		_description( "Unknown Body" ) {
	}
	public: 
		virtual ~Body() = 0 {
	}
	    virtual std::string getDescription() const {
		return _description;
	}
	    virtual double cost() const = 0;
};

class Hollow : public Body { 

	public: Hollow() {
		_description = "Hollow Body";
	}
	public: double cost() const {
		return 223.89;
	}
};

class Solid : public Body { 

	public: Solid() {
		_description = "Solid Body";
	}
	public: double cost() const {
		return 243.89;
	}
};


class BodyDecorator : public Body {      // abstract


	protected: BodyDecorator() {
	}
	public:
		virtual ~BodyDecorator() = 0 {
	};
	   virtual std::string getDescription() const = 0;
};

class Red : public BodyDecorator { // concrete decorator classes

		private: 
			
			const Body* _body;

		public: 
			
			 Red( const Body* body ) : _body( body ) 
				{ 
					assert( body );
			}
		
			 ~Red() {
					delete _body;
				}
		
			 std::string getDescription() const {
					return _body->getDescription() + ", RED";
				}
		
			 double cost() const {
					return 50.00 + _body->cost();
				}
		};



class Green : public BodyDecorator {

		private: 
			
			const Body* _body;

		public: 
			
			 Green( const Body* body ) : _body( body ) 
				{ 
					assert( body );
			}
		
			 ~Green() {
					delete _body;
				}
		
			 std::string getDescription() const {
					return _body->getDescription() + ", Green";
				}
		
			 double cost() const {
					return 50.00 + _body->cost();
				}
		};


#endif
