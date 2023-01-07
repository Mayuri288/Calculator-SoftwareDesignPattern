#include "Addition.h"

//constructor for Addition
Addition::Addition()
{
}

//destructor for Addition
Addition::~Addition() 
{
}

//evaluate sum of numbers
int Addition::evaluateExpression(int num1, int num2) {
	return (num1+num2);
}

//checking precendence of expressions
int Addition::precedenceOfExpression(void) {
	return 2;
}



