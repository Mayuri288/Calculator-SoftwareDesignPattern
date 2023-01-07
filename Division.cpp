
#include "Division.h"
#include <stdexcept>
//constructor for Division
Division::Division() {}

//destructor for Division
Division::~Division() {}

//evaluate division of numbers
int Division::evaluateExpression(int num1, int num2) {
    if (num1 == 0) {
        throw std::invalid_argument("number can't be divided by 0");
    }
    return (num2/num1);
}
//checking the precedence of expression
int Division::precedenceOfExpression(void) {
    return 1;
}

