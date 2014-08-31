#include "Menu.h"
#include "MenuItem.h"
#include "MenuComponent.h"
#include "Robots.h"
#include "ElectricMenu.h"
#include "AcousticMenu.h"
#include "Headers.h"
#include "Guitar.h"
#include "Body.h"
#include "Customer.h"
#include "Fender.h"

#include "Order.h"


int main( int argc, char* argv[] ) 
{

     ///////////////// iterator and composite patterns ////////////////////////
	std::auto_ptr< ElectricMenu > ElectricMenu( new ElectricMenu () );
    std::auto_ptr< AcousticMenu > AcousticMenu( new AcousticMenu() );
	std::auto_ptr< Robot > robot( new Robot(ElectricMenu.get(), AcousticMenu.get() ));
	
	robot->printAcousticMenu();
	/////////////////////////////////////////////////////////////

	//**************** order number 1 **************//

	/////////////////////////////////////////
    Body* body = new Hollow(); // decorator
	body = new Red(body);
   //////////////////////////////////////////
     std::auto_ptr< GuitarStore > oregonStore( new AcousticGuitarStore() );
	std::auto_ptr< Guitar > guitar = oregonStore->orderGuitar( "Acoustic" );
	


///////////// Strategy ////////////////////
	guitar->setTuneBehavior(new NotTuned);
    guitar->performTune();
	guitar->setStyleBehavior(new FlyingV);
	guitar->performStyle();
	
     
	
	Order* order = new Order();  // create order
	Customer* cellphone = new Customer("Corey Mattis", body, guitar->toString(), robot, false);  // update to let observer know order is done.
    order->registerObserver(cellphone);          // register
	order->notifyObservers();
    order->removeObserver(cellphone);

	//*************** order number 2 ********************//
     std::auto_ptr< Robot > robot2( new Robot(ElectricMenu.get(), AcousticMenu.get() ));
	robot2->printElectricMenu();

/////////////////////////////////////////
    Body* body2 = new Solid(); // decorator
	body2 = new Green(body2);
   //////////////////////////////////////////
	std::auto_ptr< GuitarStore > vancouverStore( new ElectricGuitarStore() );
	std::auto_ptr< Guitar > guitar2 = vancouverStore->orderGuitar( "Electric" );

	

	///////Strategy///////////////
	
	guitar->setTuneBehavior(new Tuned);
    guitar->performTune();
	guitar->setStyleBehavior(new StratoCaster);
	guitar->performStyle();

	//std::auto_ptr< Robot > robot2( new Robot(ElectricMenu.get(), AcousticMenu.get() ));
	//robot2->printElectricMenu();

	
	Order* order2 = new Order(); 
	Customer* cellphone2 = new Customer("Brian M", body, guitar2->toString(), robot2, true);  // update to let observer know order is done.
    order2->registerObserver(cellphone2);          // register
	order2->notifyObservers();



}
