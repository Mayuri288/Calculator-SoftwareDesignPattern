#ifndef _MULTIPLICATION_H_
#define _MULTIPLICATION_H_
#include "Binary_Commands.h"

class Mulitiplication : public Binary_Commands {
public:
	//constructor for Mulitiplication
	Mulitiplication();
	//destructor for Mulitiplication
	virtual ~Mulitiplication();

	//evlauate Mulitiplication
	int evaluateExpression(int num1, int num2);

	// checking the precedence of operation
	int precedenceOfExpression(void);

};

#endif