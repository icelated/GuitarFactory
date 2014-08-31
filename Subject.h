#ifndef	_SUBJECT_
#define _SUBJECT_


#include "Observer.h"


class Subject {

	protected: virtual ~Subject() = 0 {
	};
	public: virtual void registerObserver( Observer* o ) = 0;
	public: virtual void removeObserver( Observer* o ) = 0;
    public: virtual void notifyObservers() = 0;
};


#endif
