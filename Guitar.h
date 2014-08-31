#ifndef	_GUITAR_H_
#define _GUITAR_H_

#include "Headers.h"
#include "TuneBehavior.h"
#include "Tuned.h"
#include "NotTuned.h"
#include "FlyingV.h"
#include "StratoCaster.h"


//////////////////////////////////////////////////////
//
//
//      Components
//
//
///////////////////////////////////////////////////////

class GuitarBody 
{
public: 
	
	virtual ~GuitarBody() = 0 {
		}
	
	virtual std::string toString() const = 0;
};


//////////////////////////////////////////////////////
//
//
//      Guitar body concrete classes
//
//
///////////////////////////////////////////////////////
class HollowGuitarBody : public GuitarBody 
{

public:
	
	std::string toString() const {
			return "Hollow Guitar Body";
		}
};


////////////////////////////////////////////
////////////////////////////////////////////
class SolidGuitarBody : public GuitarBody 
{

public: 
	
	std::string toString() const {
			return "Solid Guitar Body";
		}
};

///////////////////////////////////////
///////////////////////////////////////
class Bridge 
{

public: 
	
	virtual ~Bridge() = 0 {
		}

	virtual std::string toString() const = 0;

};


/////////////////////////////////////////////
///////////////////////////////////////////////
class ChromeBridge : public Bridge 
{

public: 
	
	
	std::string toString() const {
			return "Chrome Bridge";
		}
};


/////////////////////////////////////////////
/////////////////////////////////////////////
class RoseWoodBridge : public Bridge 
{

public: 
	
	
	std::string toString() const{
			return ( "Rosewood Bridge" );
		}
};


////////////////////////////////////////
////////////////////////////////////////
class FretBoard 
{

public: 

	virtual ~FretBoard() = 0{
	}
	virtual std::string toString() const = 0;
};

////////////////////////////////////////////////////
///////////////////////////////////////////////////
class SlottedFretBoard : public FretBoard
{
public: 
	
	std::string toString() const 
		{
			return "Non-Slotted Fret Board";
		}
};

///////////////////////////////////////////////////
/////////////////////////////////////////////////////
class NonSlottedFretBoard : public FretBoard 
{

public: 
	
	std::string toString() const 
		{
			return "Straight Fret Board";
		}
};


/////////////////////////////////////////////
///////////////////////////////////////////
class HeadStock 
{

public: 

	virtual ~HeadStock() = 0{
	}

	virtual std::string toString() const = 0;
};

//////////////////////////////////////////////////////
////////////////////////////////////////////////////
class AngledHeadStock : public HeadStock 
{


public: 
	
	
	std::string toString() const 
		{
			return "Angled HeadStock";
		}
};


///////////////////////////////////////////
///////////////////////////////////////////
class StraightHeadStock : public HeadStock 
{

public: 
	
	
	std::string toString() const 
		{
			return "Straight HeadStock";
		}
};


////////////////////////////////////////////
///////////////////////////////////////////
class Knob 
{

public: 


	virtual ~Knob() = 0 
	{
	}

	virtual std::string toString() const = 0;
};


///////////////////////////////////////
//////////////////////////////////////
class VolumeKnob : public Knob 
{

public: 
	
	
	std::string toString() const 
		{
			return "Volume Knob";
		}
};


////////////////////////////////////////////
////////////////////////////////////////////
class ToneKnob : public Knob 
{

public: 
	
	
	std::string toString() const 
		{
			return "Tone Knob";
		}
};



/////////////////////////////////////////////////
////////////////////////////////////////////////
class NeckStrap 
{

public: 
	virtual ~NeckStrap() = 0 
	{
	}

	virtual std::string toString() const = 0;
};


///////////////////////////////////////////////////
//////////////////////////////////////////////////
class LeatherNeckStrap : public NeckStrap 
{

public: 
	
	
	
	std::string toString() const 
		{
			return "Leather Neck Strap";
		}
};


/////////////////////////////////////////////////
/////////////////////////////////////////////////
class NylonNeckStrap : public NeckStrap 
{

public: 
	
	
	std::string toString() const 
		{
			return "Nylon Neck Strap";
		}
};



/////////////////////////////////////////////
///////////////////////////////////////////////
class Pickup 
{

public: 
	virtual ~Pickup() = 0 
	{
	}

	virtual std::string toString() const = 0;
};


///////////////////////////////////////////////////
////////////////////////////////////////////////////
class BassPickup : public Pickup 
{

public: std::string toString() const 
		{
			return "Bass Pickup";
		}
};


////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////
class RazorPickup : public Pickup 
{

public: std::string toString() const 
		{
			return "Razor Pickup";
		}
};



//////////////////////////////////////////////////////
//////////////////////////////////////////////////////
class Strings 
{

public: 

	virtual ~Strings() = 0 
	{
	}

	virtual std::string toString() const = 0;
};


//////////////////////////////////////////////////
////////////////////////////////////////////////////
class NylonStrings : public Strings 
{

public: std::string toString() const 
		{
			return "Nylon Strings";
		}
};


////////////////////////////////////////////////
////////////////////////////////////////////////
class SteelStrings : public Strings
{

public: std::string toString() const 
		{
			return "Steel Strings";
		}
};


//////////////////////////////////////////////
/////////////////////////////////////////////
class Switches 
{

public: virtual ~Switches() = 0 
		{
		}
public: virtual std::string toString() const = 0;
};



//////////////////////////////////////////////////
//////////////////////////////////////////////////
class DPDT_Switches : public Switches 
{

public: std::string toString() const 
		{
			return "DPDT Switches";
		}
};



/////////////////////////////////////////////////////
////////////////////////////////////////////////////
class SPDT_Switches : public Switches 
{

public: std::string toString() const 
		{
			return "SPDT Switches";
		}
};


//////////////////////////////////////////////////////
//////////////////////////////////////////////////////
class TunerKeys 
{

public: 

	virtual ~TunerKeys() = 0 
	{
	}

	virtual std::string toString() const = 0;
};



/////////////////////////////////////////////////////
/////////////////////////////////////////////////////
class LEDTunerKeys : public TunerKeys 
{

public: 
	
	std::string toString() const {
			return "LED TunerKeys";
		}
};


//////////////////////////////////////////////////
//////////////////////////////////////////////////
class OrchestralTunerKeys : public TunerKeys 
{

public: 
	
	std::string toString() const {
			return "Orchestral TunerKeys";
		}
};


////////////////////////////////////////////////////
////////////////////////////////////////////////////
class WhammyBar
{

public: 

	virtual ~WhammyBar() = 0 {
	}

	virtual std::string toString() const = 0;
};


///////////////////////////////////////////////////
/////////////////////////////////////////////////////
class TremoloWhammyBar : public WhammyBar 
{

public: 
	
	std::string toString() const {
			return "Tremolo WhammyBar";
		}
};


////////////////////////////////////////////////
/////////////////////////////////////////////////
class VigratoWhammyBar : public WhammyBar 
{

public: 
	
	
	std::string toString() const {
			return "Vigrato WhammyBar";
		}
};


///////////////////////////////////////////////////////////////////
//
//
//       Guitar class
//
//
//////////////////////////////////////////////////////////////////


class Guitar 
{

private: 

	std::string _name;
	std::auto_ptr< TuneBehavior > _tuneBehavior; ////   sets tune behavior
	std::auto_ptr< StyleBehavior > _styleBehavior; //// sets

protected: 


	mutable std::auto_ptr< HeadStock > _HeadStock;
	mutable std::auto_ptr< NeckStrap > _NeckStrap;
	mutable std::auto_ptr< Bridge > _Bridge;
	mutable std::auto_ptr< Strings > _Strings;
	mutable std::auto_ptr< Switches > _Switches;
	mutable std::auto_ptr< GuitarBody > _GuitarBody;
	mutable std::auto_ptr< FretBoard > _FretBoard;
	mutable std::auto_ptr< Knob > _Knob;
	mutable std::auto_ptr< Pickup > _Pickup;
	mutable std::auto_ptr< TunerKeys > _TunerKeys ;
	mutable std::auto_ptr< WhammyBar > _WhammyBar;

     //  initializes guitar with tune or style
	Guitar(TuneBehavior* tuneBehavior, StyleBehavior* style ) : _tuneBehavior( tuneBehavior ), _styleBehavior(style) {
	}

public: 

	virtual void prepare() const = 0;
	virtual ~Guitar(){

	}
	//////////// strategy pattern ////////////////////////
	void setTuneBehavior( TuneBehavior* tb ) { assert( tb );
	_tuneBehavior = std::auto_ptr< TuneBehavior >( tb ); // 
	}

	void performTune() const {
		_tuneBehavior->Tune();

	}

	void setStyleBehavior( StyleBehavior* tb ) { assert( tb );
	_styleBehavior = std::auto_ptr< StyleBehavior >( tb ); // 
	}

	void performStyle() const {
		_styleBehavior->perform();

	}

	////////////////////////////////////////////////////////


	virtual void glue() const {
		std::cout << "Glue guitar together" << std::endl;
	}

	virtual void spraypaint() const {
		std::cout << "Spray paint the guitar body" << std::endl;
	}

	virtual void box() const{
		std::cout << "Place guitar in box" << std::endl;
	}

	void setName( std::string name) {
		_name = name;
	}

	std::string getName() const {
		return _name;
	}

	std::string toString() const {
		std::stringstream value; 
		value << "---- " << _name.c_str() << " ----" << std::endl;

		if( _HeadStock.get() != 0 ) 
		{
			value << _HeadStock->toString();
			value << std::endl;
		}
		if( _NeckStrap.get() != 0 ) 
		{
			value << _NeckStrap->toString();
			value << std::endl;
		}
		if( _Strings.get() != 0 ) 
		{
			value << _Strings->toString();
			value << std::endl;
		}
		if( _GuitarBody.get() != 0 )
		{
			value << _GuitarBody->toString();
			value << std::endl;
		}

		if( _Switches.get() != 0 )
		{
			value << _Switches->toString();
			value << std::endl;
		}

		if( _FretBoard.get() != 0 )
		{
			value << _FretBoard->toString();
			value << std::endl;
		}

		if( _Knob.get() != 0 )
		{
			value << _Knob->toString();
			value << std::endl;
		}

		if( _Pickup.get() != 0 )
		{
			value << _Pickup->toString();
			value << std::endl;
		}

		if( _TunerKeys.get() != 0 )
		{
			value << _TunerKeys->toString();
			value << std::endl;
		}

		if( _WhammyBar.get() != 0 )
		{
			value << _WhammyBar->toString();
			value << std::endl;
		}

		if( _Bridge.get() != 0 )
		{
			value << _Bridge->toString();
			value << std::endl;

		}

		return value.str();
	}
};

///////////////////////////////////////////////////////////////////
//
//
//       Guitar Store
//
//
//////////////////////////////////////////////////////////////////

class GuitarStore 
{

protected: 
	
	GuitarStore() {
		   }


public: 

	virtual ~GuitarStore() = 0 {
	}

	std::auto_ptr< Guitar > orderGuitar( std::string type ) const 
	{
		std::auto_ptr< Guitar > guitar( createGuitar( type ) );
		std::cout << endl;
		std::cout << "--- Making a " << guitar->getName() << " ---" << std::endl;
		guitar->prepare();
		guitar->glue();
		guitar->spraypaint();
		guitar->box();
		return guitar;
	}

	virtual std::auto_ptr< Guitar > createGuitar( std::string type ) const = 0;
};



///////////////////////////////////////////////////////////////////
//
//
//       Guitar component factory
//
//
//////////////////////////////////////////////////////////////////

class GuitarComponentFactory 
{
public: 

	virtual HeadStock* createHeadStock() const = 0;
	virtual NeckStrap* createNeckStrap() const = 0;
	virtual Strings* createStrings() const = 0;
	virtual Bridge*  createBridge() const = 0;
	virtual Switches* createSwitches() const = 0;
	virtual GuitarBody* createGuitarBody() const = 0;
	virtual FretBoard* createFretBoard() const = 0;
	virtual Knob* createKnob() const = 0;
	virtual Pickup* createPickup() const = 0;
	virtual TunerKeys* createTunerKeys() const = 0;
	virtual WhammyBar* createWhammyBar() const = 0;
	virtual ~GuitarComponentFactory() = 0 {}
};

///////////////////////////////////////////////////////////////////
//
//
//       Accoustic Guitar
//
//
//////////////////////////////////////////////////////////////////

class AcousticGuitar : public Guitar 
{

private: mutable std::auto_ptr< GuitarComponentFactory > _ingredientFactory;

public: 

	explicit AcousticGuitar( GuitarComponentFactory* ingredientFactory ) : 
	_ingredientFactory( ingredientFactory ), Guitar( new NotTuned(), new FlyingV() ) // initializing for our strategy pattern
	{ 
		assert( ingredientFactory );
	}

	void prepare() const 
	{
		// making the guitar
		std::cout << "Preparing to assemble an " << getName().c_str() << std::endl;
		_HeadStock = std::auto_ptr< HeadStock>( _ingredientFactory->createHeadStock() );
		_NeckStrap = std::auto_ptr< NeckStrap>( _ingredientFactory->createNeckStrap() );
		_Strings = std::auto_ptr< Strings>( _ingredientFactory->createStrings() );
		_GuitarBody = std::auto_ptr< GuitarBody>( _ingredientFactory->createGuitarBody() );
		_FretBoard = std::auto_ptr< FretBoard>( _ingredientFactory->createFretBoard() );
		_Knob = std::auto_ptr< Knob>( _ingredientFactory->createKnob() );
		_Pickup = std::auto_ptr< Pickup>( _ingredientFactory->createPickup() );
		_TunerKeys = std::auto_ptr< TunerKeys>( _ingredientFactory->createTunerKeys() );
		_WhammyBar = std::auto_ptr< WhammyBar>( _ingredientFactory->createWhammyBar() );
	}
};

///////////////////////////////////////////////////////////////////
//
//
//       Electric Guitar
//
//
//////////////////////////////////////////////////////////////////

class ElectricGuitar : public Guitar 
{

private: 

	mutable std::auto_ptr< GuitarComponentFactory > _ingredientFactory;

public: 
	                                                                 // initializing our strategy pattern
		ElectricGuitar( GuitarComponentFactory* ingredientFactory ) : Guitar( new Tuned(), new StratoCaster() ),
		_ingredientFactory( ingredientFactory ) 
	{
		assert( ingredientFactory );
	}


	void prepare() const 
	{
		std::cout << "Preparing to assemble an " << getName().c_str() << std::endl;
		_HeadStock = std::auto_ptr< HeadStock>( _ingredientFactory->createHeadStock() );
		_NeckStrap = std::auto_ptr< NeckStrap>( _ingredientFactory->createNeckStrap() );
		_Strings = std::auto_ptr< Strings>( _ingredientFactory->createStrings() );
		_Switches= std::auto_ptr< Switches>( _ingredientFactory->createSwitches() );
		_FretBoard = std::auto_ptr< FretBoard>( _ingredientFactory->createFretBoard() );
		_Knob = std::auto_ptr< Knob>( _ingredientFactory->createKnob() );
		_Pickup = std::auto_ptr< Pickup>( _ingredientFactory->createPickup() );
		_TunerKeys = std::auto_ptr< TunerKeys>( _ingredientFactory->createTunerKeys() );
		_WhammyBar = std::auto_ptr< WhammyBar>( _ingredientFactory->createWhammyBar() );
		_Bridge = std::auto_ptr<Bridge>(_ingredientFactory->createBridge() );
	}
};

///////////////////////////////////////////////////////////////////
//
//
//       Accoustic Guitar Component Factory
//
//
//////////////////////////////////////////////////////////////////

class AcousticGuitarComponentFactory : public GuitarComponentFactory
{

public: 
	HeadStock* createHeadStock() const 
	{
		return new StraightHeadStock();
	}

	NeckStrap* createNeckStrap() const 
	{
		return new NylonNeckStrap();
	}

	Strings* createStrings() const
	{
		return new SteelStrings();
	}


	Bridge*  createBridge() const
	{
		return new RoseWoodBridge();
	}


	Switches* createSwitches() const 
	{
		return new DPDT_Switches();
	}


	GuitarBody* createGuitarBody() const {
		return new SolidGuitarBody();
	}

	FretBoard* createFretBoard() const {
		return new NonSlottedFretBoard();
	}

	Knob* createKnob() const {
		return new VolumeKnob();
	}

	Pickup* createPickup() const {
		return new BassPickup();
	}

	TunerKeys* createTunerKeys() const {
		return new LEDTunerKeys();
	}

	WhammyBar* createWhammyBar() const {
		return new TremoloWhammyBar();
	}
};

///////////////////////////////////////////////////////////////////
//
//
//       Electric Guitar Component Factory
//
//
//////////////////////////////////////////////////////////////////

class ElectricGuitarComponentFactory : public GuitarComponentFactory 
{



public: 
	HeadStock* createHeadStock() const 
	{
		return new AngledHeadStock();
	}

	NeckStrap* createNeckStrap() const 
	{
		return new LeatherNeckStrap();
	}

	Strings* createStrings() const 
	{
		return new NylonStrings();
	}


	Bridge*  createBridge() const 
	{

		return new ChromeBridge();
	}


	Switches* createSwitches() const
	{
		return new SPDT_Switches();
	}


	GuitarBody* createGuitarBody() const 
	{
		return new HollowGuitarBody();
	}

	FretBoard* createFretBoard() const {
		return new SlottedFretBoard();
	}

	Knob* createKnob() const {
		return new ToneKnob();
	}

	Pickup* createPickup() const {
		return new RazorPickup();
	}

	TunerKeys* createTunerKeys() const {
		return new OrchestralTunerKeys();
	}

	WhammyBar* createWhammyBar() const {
		return new VigratoWhammyBar();
	}

};

///////////////////////////////////////////////////////////////////
//
//
//       Accoustic Guitar Store
//
//
//////////////////////////////////////////////////////////////////

class AcousticGuitarStore : public GuitarStore
{

public: 

	std::auto_ptr< Guitar > createGuitar( std::string item ) const
	{
		std::auto_ptr< Guitar > guitar( 0 );
		GuitarComponentFactory* ingredientFactory = new AcousticGuitarComponentFactory();

		if( item.compare( "Acoustic" ) == 0 ) 
		{
			guitar = std::auto_ptr< Guitar >( new AcousticGuitar( ingredientFactory ) );
			guitar->setName( "Acoustic Guitar Body" );

			return guitar;
		}
		return guitar;
	}

};

///////////////////////////////////////////////////////////////////
//
//
//       Electric Guitar Store
//
//
//////////////////////////////////////////////////////////////////

class ElectricGuitarStore : public GuitarStore 
{

public: 


	std::auto_ptr< Guitar > createGuitar( std::string item ) const
	{

		std::auto_ptr< Guitar > guitar( 0 );

		GuitarComponentFactory* ingredientFactory = new ElectricGuitarComponentFactory();

		if( item.compare( "Electric" ) == 0 ) 
		{
			guitar = std::auto_ptr< Guitar >( new ElectricGuitar( ingredientFactory ) );
			guitar->setName( "Electric GuitarBody" );


			return guitar;

		}
		return guitar;
	}


};


#endif
