#include "Subtraction.h"

//constructor for Subtraction
Subtraction::Subtraction() {}

//destructor for Subtraction
Subtraction::~Subtraction() {}

//evaluate Subtraction
int Subtraction::evaluateExpression(int num1, int num2) {
    return (num2-num1);
}
int Subtraction::precedenceOfExpression(void) {
    return 2;
}