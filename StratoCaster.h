#ifndef	_STRATOCASTER_
#define _STRATOCASTER_

#include "StyleBehavior.h"

class StratoCaster : public StyleBehavior {

	public:	void perform () const {
		std::cout << "StratoCaster Guitar Style" << std::endl;
	}
};


#endif
