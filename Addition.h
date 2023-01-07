#ifndef _ADDITION_H_
#define _ADDITION_H_
#include "Binary_Commands.h"
class Addition : public Binary_Commands {
public:
	//constructor for Addition
	Addition();
	//destructor for Addition
	virtual ~Addition();
	//evaluate Expression 
	int evaluateExpression(int num1, int num2);
	// checking the precedence of operation
	int precedenceOfExpression(void);
};

#endif