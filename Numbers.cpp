#include "Numbers.h"

//contructor for numbers
Numbers::Numbers(int num)
	: number(num){}

//destructor for numbers
Numbers::~Numbers() {}

//execute
bool Numbers::executeOperation(Stack<int> &st) {
	st.push(this->number);
	return true;
}

int Numbers::precedenceOfExpression(void) {
	return 0;
}
