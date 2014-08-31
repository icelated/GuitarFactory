#ifndef	_CUSTOMER_
#define _CUSTOMER_
#include <iostream>
#include "Observer.h"
#include "Robots.h"
#include "MenuItem.h"

using namespace std;



class Customer: public Observer {
	public: 

     
	
		
		std::string _name;            // store customer name
		std::string _tostringGuitar;  // hold guitar type
        Body* _bod;                     // holds body object
    

       double _electric;         // hold total cost of electric parts 
	   double _acoustic;     // hold total cost of electric parts 
	   bool _set;              // set true for electric set false for acoustic

	   double total; // total cost

		Customer(std::string name, Body* bod, std::string tostring,  std::auto_ptr< Robot > robot, bool set){ //std::auto_ptr< Guitar >  guitar){ // constructor
            _name = name; // store name to use for display
			_tostringGuitar = tostring;
			_bod = bod;
             _electric = robot->getpartscostelectric();  // gets total electric parts cost and assigns it
			_acoustic = robot->getpartscostacoustic();
			_set = set;
			

		}

		void update() // update
     {

		 std::cout << endl;
		 std::cout << endl;
		 std::cout << "           *** Ring, Ring, Ring ***          "  << endl;
		 std::cout	<< _name << " your Guitar is ready for pickup ---" << endl;
		 std::cout << endl;
		 std::cout << "Order Details:" << endl;

		 std::cout << _tostringGuitar ; 
		 std::cout << _bod->getDescription() << endl;
		 total = _bod->cost();
		 if(_set)            // if true / if electric add and print cost
		 {
			 total += total + _electric;
          std::cout << "your total price is $" << total << endl;
		 }
		 else
		 {
          total += total + _acoustic;
          std::cout << "your total price is $" << total << endl;
		 }
			 
	}
	
};


#endif
