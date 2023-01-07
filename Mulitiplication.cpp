#include "Mulitiplication.h"

//constructor for Mulitiplication
Mulitiplication::Mulitiplication() 
{
}

//destructor for Mulitiplication
Mulitiplication::~Mulitiplication()
{
}

//evaluate Mulitiplication
int Mulitiplication::evaluateExpression(int num1, int num2) {
    return num1 * num2;
}
int Mulitiplication::precedenceOfExpression(void) {
    return 1;
}