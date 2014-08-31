#ifndef	_ACOUSTIC_MENU_
#define _ACOUSTIC_MENU_
#include "Menu.h"
#include "MenuItem.h"
#include "AcousticMenuIterator.h"



/**
* Acoustic menu: menu - 
* in:  none
* out: none
* return: iterator
**/

class AcousticMenu : public Menu {

private: 

      std::vector< MenuItem* > _menuItems;    // items vector


		public: AcousticMenu() { 
					    addItem( "","",59.99);
						addItem( "Head Stock","Straight",32.23);
						addItem( "Knobs","Which Hat",4.89);
						addItem( "Finger Board","Non - Slotted ",15.00);
						addItem( "Switches","DPDT ",15.00);
						addItem( "Neck Strap","Nylon ",14.89);
						addItem( "Strings","Nylon ",2.99);
						addItem( "Turn Keys","Basic LED ",14.89);
						addItem( "Body","Hollow ",164.89);
						addItem( "Pickup","Acoustic Tube",12.99);
						addItem( "Whammy Bar","Tremolo",32.23);

					}
					void addItem( std::string name, std::string description, double price ) {
						MenuItem* menuItem = new MenuItem( name, description, price );
						_menuItems.push_back( menuItem );         // push all the items
					}
					std::vector< MenuItem* > getMenuItems() const {
						return _menuItems;                              // return menu items
					}
					Iterator<MenuItem>* createIterator() const {         // create iterator and create a acoustic iterator
						return dynamic_cast<Iterator<MenuItem>* > ( new AcousticMenuIterator( _menuItems) );
					}

			};

#endif
