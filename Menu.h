#include <assert.h>
#include <vector>
#include "MenuItem.h"



class Menu : public MenuComponent {
	
  
	public: 
              // create iterator of menuItems
         virtual Iterator<MenuItem>* createIterator() const = 0;
	     virtual ~Menu() = 0 {
	}
		
	
};

#endif
