#ifndef	_ELECTRIC_MENU_ITERATOR_
#define _ELECTRIC_MENU_ITERATOR_
#include "Iterator.h"


class ElectricMenuIterator : public Iterator<MenuItem> 
{
	private: 

		mutable std::vector< MenuItem* > _items; // hold our items
	    mutable MenuItem* _position;           // position is set to beginning so we can know where we are at
 

	public: 
		                          // set items
			ElectricMenuIterator( std::vector< MenuItem* > items ) : _items( items ) { 
				_position = *items.begin(); // set position
	}

	MenuItem* next() const {
		return _position;}

	bool hasNext() const 
	{
        std::vector< MenuItem* >::iterator iterator;  // create a vector iterator

		// iterate over the items
for( iterator = _items.begin(); iterator != _items.end(); iterator++ ) {
			if( *iterator == _position ) {
				if( ++iterator != _items.end() ) {
					_position = *iterator;
					return true;
				}
				else
					return false;
			}
		}
		return false;
	}
};

#endif
