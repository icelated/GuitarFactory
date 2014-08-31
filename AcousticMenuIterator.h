#ifndef	_ACOUSTIC_MENU_ITERATOR_
#define _ACOSTIC_MENU_ITERATOR_
#include "Iterator.h"


class AcousticMenuIterator : public Iterator<MenuItem> 
{
	private: 

		mutable std::vector< MenuItem* > _items;
	    mutable MenuItem* _position;
 

	public: 
		
			AcousticMenuIterator( std::vector< MenuItem* > items ) : _items( items ) { 
				_position = *items.begin();
	}

	MenuItem* next() const {
		return _position;}

	bool hasNext() const 
	{
        std::vector< MenuItem* >::iterator iterator;

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
