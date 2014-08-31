#ifndef	_ITERATOR_
#define _ITERATOR_


template <class T> // casts anything can be anything. acts its one thing a generic type
class Iterator
{

public:

    virtual bool hasNext() const = 0;
	virtual T* next() const = 0;     
	virtual ~Iterator() = 0 {
	}


};


#endif
