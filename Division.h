#ifndef _DIVIDISION_H_
#define _DIVIDISION_H_
#include "Binary_Commands.h"

class Division : public Binary_Commands {
public:
	//constructor for division
	Division();

	//destructor for division
	virtual ~Division();

	//evaluate Expressions
	int evaluateExpression(int num1, int num2);
	// checking the precedence of operation.
	int precedenceOfExpression(void);

};

#endif