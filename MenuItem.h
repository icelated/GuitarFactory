#ifndef	_MENU_ITEM_
#define _MENU_ITEM_


class MenuItem : public MenuComponent {

	private: 


		std::string _name;         // hold name of guitar
		std::string _description; // guitar description
		double _price;            // guitar price

	public: 
		             // set name, description, price
		MenuItem( const std::string name, const std::string description, double price ) : _name( name ), _description( description ), _price( price ) {
				  }

		std::string getName() const {
		return _name;}                  // get name

		std::string getDescription() const {
		return _description;}       // get description

		double getPrice() const {
		return _price;}            // get price

		void print() const {       // print guitar
			 std::cout << "  " << getName().c_str();
		     std::cout << ", " << getPrice() << std::endl;
			 std::cout << "     -- " << getDescription().c_str() << std::endl;
				  }
			};

#endif
