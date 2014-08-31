#ifndef	_INVENTORY_COMPONENT_
#define _INVENTORY_COMPONENT_
#include <iostream>
#include "MenuException.h"



using namespace std;

class MenuComponent {


	public: MenuComponent() {
	}
	public: virtual ~MenuComponent() = 0 {
	}
	public: virtual void add( MenuComponent* menuComponent ) {
		throw new UnsupportedOperationException();
	}
	public: virtual void remove( MenuComponent* menuComponent ) {
		throw new UnsupportedOperationException();
	}
	public: virtual const MenuComponent* getChild( int i ) const {
		throw new UnsupportedOperationException();
	}
	public: virtual std::string getName() const {
		throw new UnsupportedOperationException();
	}
	public: virtual std::string getDescription() const {
		throw new UnsupportedOperationException();
	}
	public: virtual double getPrice() const {
		throw new UnsupportedOperationException();
	}
	public: virtual void print() const {
		throw new UnsupportedOperationException();
	}
};


#endif
