
#ifndef _POSTFIX_CONVERSION_H_
#define	_POSTFIX_CONVERSION_H_

#include <string>
#include <iostream>
#include <sstream>
#include "Array_Iterator.h"
#include "Expression_Command.h"
#include "Expression_Command_Factory_Methods.h"
#include "infix_to_postfix_conversion.h"



class Postfix_Conversion {
public:

	//constructor for Postfix_Conversion
	Postfix_Conversion(const std::string &infixExpression,
					   Expression_Command_Factory_Methods &factoryMethod,
					   int& postfixExp_,
					   Array<Expression_Command*> &postfixExpression);

	//destructor for Postfix_Conversion
	~Postfix_Conversion();

	bool Infix_to_Postfix_Conversion();


protected:
	const std::string & infixExpression;
	Expression_Command_Factory_Methods &factoryMethod;
	int& postfixExp_;
	Array<Expression_Command*> & postfixExpression;
};

#endif
