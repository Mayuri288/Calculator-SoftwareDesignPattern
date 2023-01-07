

#ifndef _ARRAY_ITERATOR_H_
#define _ARRAY_ITERATOR_H_

#include "Array.h"

template <typename T>
class Array_Iterator
{
public:
	typedef T type;

	//constructor for Array_Iterator
	Array_Iterator (Array<T> & a, int postfixExp);

	//destructor for Array_Iterator
	~Array_Iterator (void);

	//iterate to next location
	bool advance(void);

	//is iteration done?
	bool is_done (void);

	T operator * (void);

	T * operator -> (void);

private:
	Array <T> a_;
	size_t cur_size_;
	size_t max_size_;
};

#include "Array_Iterator.cpp"

#endif
