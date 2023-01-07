#ifndef _BINARY_COMMAND_H_
#define _BINARY_COMMAND_H_
#include "Expression_Command.h"

class Binary_Commands : public Expression_Command {
public:
	// Default Constructor for binary commands
	Binary_Commands();

	//destructor for binary commands
	virtual ~Binary_Commands();

	//execute binary commands
	virtual bool executeOperation(Stack<int> & stack);
	
	//evaluate given operator
	virtual int evaluateExpression(int num1, int num2) = 0;
};
#endif