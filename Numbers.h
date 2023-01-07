#ifndef _NUMBERS_H_
#define _NUMBERS_H_
#include "Expression_Command.h"
#include <sstream>

class Numbers: public Expression_Command {
public:
	
	// constructor for Numbers
	Numbers(int num);

	//destructor for numbers
	virtual ~Numbers();

	//Check precendence of expressions
	int precedenceOfExpression(void);

	// execution on stack
	virtual bool executeOperation(Stack<int> & st);
	
private:
	int number;
};

#endif