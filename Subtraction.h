
#ifndef _SUBTRACTION_H_
#define _SUBTRACTION_H_

#include "Binary_Commands.h"

class Subtraction : public Binary_Commands {
public:
    //constructor for subtraction
    Subtraction();
    // destructor for subtraction
    virtual ~Subtraction();
    //evaluate Subtraction
    int evaluateExpression(int num1, int num2);
    // checking the precedence of operation
    int precedenceOfExpression(void);
};

#endif