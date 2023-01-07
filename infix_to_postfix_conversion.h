#ifndef _INFIX_TO_POSTFIX_CONVERSION_H_
#define _INFIX_TO_POSTFIX_CONVERSION_H_

#include "Expression_Command.h"
#include "Stack.h"
#include "Array.h"

class infix_to_postfix_conversion {
public:

	//constructor for infix_to_postfix_conversion
	infix_to_postfix_conversion(Expression_Command* expCmd,
						Stack<Expression_Command*> & stack_cmd,
						Stack<char> & stack_exp,
						Array<Expression_Command*> & postfix,
						int & postfix_exp,
						bool checkNumber);

	//destructor for infix_to_postfix_conversion
	~infix_to_postfix_conversion();

	// convert infix_to_postfix
	bool infix_to_postfix_conversion_();

	//check precedence of expressions
	bool check_precedence_of_Expressions (Expression_Command* leftExpression, Expression_Command* rightExpression);

	//gets the precedence
	int checkPriorityOfExpression (Expression_Command* expCmd);

protected:
	int& postfix_exp_;
	bool checkNumber_;
	Array<Expression_Command*>& postfix_;
	Expression_Command* exp_;
	Stack<Expression_Command*> & stack_exp_cmd;
	Stack<char> & stack_exp;
	
};

#endif