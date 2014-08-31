#ifndef	_ORDER_
#define _ORDER_
#pragma once;

#include <list>
#include <iostream>
#include "Subject.h"

using namespace std;


class Order : public Subject {


     private: 

		 mutable std::list< Observer* > _observers;
		 static Order* _uniqueInstance;

	    ~Order() {
		_uniqueInstance;

	   }

    public: 
                   // singleton //////////////////////////////////////
	static Order* getInstance() {
		if( _uniqueInstance == 0 ) {
			std::cout << "Creating unique instance of The order class" << std::endl;
			_uniqueInstance = new Order();
		}
		std::cout << "Returning instance of theorder class"<< std::endl;
		return _uniqueInstance;
	   }

	void registerObserver( Observer* o ) { assert( o );
		_observers.push_back(o);
	}
	
	 void removeObserver( Observer* o ) { assert( o );
		_observers.remove(o);
	}
			
	void notifyObservers()  {
		
			
			for( std::list< Observer* >::iterator iterator = _observers.begin(); _observers.end() != iterator; ++iterator ) {
        Observer* observer = *iterator;
        observer->update();

			
			
			
		}
	}

	
};


#endif
