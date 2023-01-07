
#ifndef _EXPRESSION_COMMAND_H_
#define _EXPRESSION_COMMAND_H_ 

#include "Stack.h"

class Expression_Command {
public:

	virtual bool executeOperation(Stack<int>& stack) = 0;

	virtual int precedenceOfExpression(void) = 0;

	//destructor
	virtual ~Expression_Command() {};
};

#endif  