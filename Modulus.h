
#ifndef _MODULUS_H_
#define _MODULUS_H_
#include "Binary_Commands.h"

class Modulus : public Binary_Commands {
public:
	//constructor for modulus
	Modulus();
	//destructor for modulus
	virtual ~Modulus();

	//evlauate given numbers
	int evaluateExpression(int num1, int num2);
	// checking the precedence of operation
	int precedenceOfExpression(void);

};

#endif