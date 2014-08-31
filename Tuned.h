#ifndef	_TUNED_
#define _TUNED_

#include "TuneBehavior.h"

class Tuned : public TuneBehavior {

	public:	
		void Tune () const {
		std::cout << "Guitar is Tuned!!" << std::endl;
	}
};


#endif
