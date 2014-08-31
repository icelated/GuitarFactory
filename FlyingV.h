#ifndef	_FLYINGV_
#define _FLYINGV_

#include "StyleBehavior.h"

class FlyingV : public StyleBehavior {

	public:	void perform () const {
		std::cout << "Flying V Guitar Style" << std::endl;
	}
};


#endif
