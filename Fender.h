#ifndef	_FENDER_
#define _FENDER_

#include "Guitar.h"

class Fender : public Guitar {

	public:	Fender() : Guitar( new Tuned(), new FlyingV() ) {
	}
	public: void display() const {
		std::cout << "I'm a real Fender Guitar" << std::endl;
	}
};
#endif
