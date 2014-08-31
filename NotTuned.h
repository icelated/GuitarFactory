#ifndef	_NOT_TUNED_
#define _NOT_TUNED_

#include "TuneBehavior.h"

class NotTuned : public TuneBehavior {

	public:	void Tune () const {
		std::cout << "Guitar is Not Tuned!!" << std::endl;
	}
};


#endif
