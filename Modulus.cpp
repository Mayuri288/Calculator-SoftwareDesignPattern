#include "Modulus.h"
#include <stdexcept>
//constructor for modulus
Modulus::Modulus() {}

//destructor for Modulus
Modulus::~Modulus() {}

//Evaluate modulus of two numbers
int Modulus::evaluateExpression(int num1, int num2) {
	if (num1 == 0) {
		throw std::invalid_argument("number can't be divided by 0");
	}
	return (num2 % num1);
}
int Modulus::precedenceOfExpression(void) {
	return 1;
}
