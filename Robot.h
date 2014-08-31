#ifndef	_ROBOTS_
#define _ROBOTS_
using namespace std;
#include <iostream>
#include <string>
#include "Guitar.h"

//**********************************************
//
//  Robot1
//
//*********************************************

class Robot {

	Menu* _electricMenu;         //create menu objects
	Menu* _acousticMenu;

	double _partsCostelectric;    // for cost of parts
	double _partsCostacoustic;


protected:

    mutable std::auto_ptr< HeadStock > _HeadStock;
	mutable std::auto_ptr< NeckStrap > _NeckStrap;
	mutable std::auto_ptr<Bridge> _Bridge;
	mutable std::auto_ptr< Strings > _Strings;
	mutable std::auto_ptr< Switches > _Switches;
	mutable std::auto_ptr< GuitarBody > _GuitarBody;
	mutable std::auto_ptr< FretBoard > _FretBoard;
	mutable std::auto_ptr< Knob > _Knob;
	mutable std::auto_ptr< Pickup > _Pickup;
	mutable std::auto_ptr< TunerKeys > _TunerKeys ;
	mutable std::auto_ptr< WhammyBar > _WhammyBar;




public: 

	Robot( Menu* electric, Menu* acoustic ) : _electricMenu( electric ), _acousticMenu( acoustic) {
		_partsCostelectric = 0;  // initializing costs
		_partsCostacoustic = 0;
	}

	double getpartscostelectric()
	{

		return _partsCostelectric;   // return cost of electric parts
	}

	double getpartscostacoustic()
	{

		return _partsCostacoustic;     // return cost of acoustic parts
	}
	void printAcousticMenu() {
		Iterator<MenuItem>* partsacoustic = _acousticMenu->createIterator();       // create iterators one for adding accoustic parts
		Iterator<MenuItem>* acousticIterator = _acousticMenu->createIterator();  // iterator for prints


		std::cout << std::endl;    
		std::cout << "Acoustic Guitar Parts List" << std::endl;
		std::cout << "---------------------------" << std::endl;
		std::cout << std::endl;
		addacoustic( partsacoustic );    ///// add function for adding THE acoustic parts cost
		printMenu( acousticIterator );   ////// print the acoustic parts - pass in second iterator

	}
	void printElectricMenu() { // does same thing as acoustic menu above

		Iterator<MenuItem>* EectricIterator = _electricMenu->createIterator();

		Iterator<MenuItem>* partselectric = _electricMenu->createIterator();

		std::cout << std::endl;
		std::cout << "Electric Guitar Parts List" << std::endl;
		std::cout << "---------------------------" << std::endl;
		std::cout << std::endl;
		addelectric( partselectric );
		printMenu( EectricIterator );
	}




private: 

	
	void addacoustic( Iterator<MenuItem>* iterator ){ assert( iterator );
	{

		while( iterator->hasNext() ) {   // iterator patern to iterate through menu items
			MenuItem* menuItem = (MenuItem*)( iterator->next() );
			_partsCostacoustic += menuItem->getPrice();       // adding up all the cost of all the acoustic costs
		}
	}
	}

	void addelectric( Iterator<MenuItem>* iterator ){ assert( iterator );
	{

		while( iterator->hasNext() ) {
			MenuItem* menuItem = (MenuItem*)( iterator->next() );
			_partsCostelectric += menuItem->getPrice();       // adding up all the cost of all the acoustic costs
		}
	}
	}
	void printMenu( Iterator<MenuItem>* iterator ) { assert( iterator );

	while( iterator->hasNext() ) {

		MenuItem* menuItem = (MenuItem*)( iterator->next() );   // iterate through the menu of parts and print them
		std::cout << menuItem->getName() << " -- ";
		std::cout << menuItem->getDescription() << " -- $";
		std::cout << menuItem->getPrice() << std::endl;
	}

	}



};

#endif
