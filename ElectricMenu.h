#ifndef	_ELECTRIC_MENU_
#define _ELECTRIC_MENU_
#include "Menu.h"
#include "MenuItem.h"
#include "ElectricMenuIterator.h"

#include <iostream>

using namespace std;

class ElectricMenu : public Menu {

private: 

      std::vector< MenuItem* > _menuItems; // menu items


		public: ElectricMenu() {  // add items in the constructor
					    addItem( "","",59.99);
						addItem( "Head Stock","Straight",32.23);
						addItem( "Bridge","Chrome",59.99);
						addItem( "Knobs","Tone Knob",4.89);
						addItem( "Finger Board","Straight ",12.99);
						addItem( "Switches","Single Pole",4.89);
						addItem( "Neck Strap","Nylon ",14.89);
						addItem( "Strings","Steel ",1.89);
						addItem( "Turn Keys","Ochestral ",11.89);
						addItem( "Body","Solid ",124.89);
						addItem( "Whammy Bar","Vigrato ",12.99);
					}
					void addItem( std::string name, std::string description, double price ) {
						MenuItem* menuItem = new MenuItem( name, description, price );
						_menuItems.push_back( menuItem );        // add all our items to the vector
					}
					std::vector< MenuItem* > getMenuItems() const {
			
						return _menuItems;  // get menu items
					}
					Iterator<MenuItem>* createIterator() const {     // call a new electric menu iterator and return it
						return dynamic_cast<Iterator<MenuItem>* > ( new ElectricMenuIterator( _menuItems) );
					}
					
			};

#endif

