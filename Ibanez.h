#ifndef	_IBANEZ_
#define _IBANEZ_

#include "Guitar.h"

class Ibanez : public Guitar {

	public:	Ibanez() : Guitar( new NotTuned(), new StratoCaster() ) {
	}
	public: void display() const {
		std::cout << "I'm a real Ibanez Guitar" << std::endl;
	}
};

#endif
