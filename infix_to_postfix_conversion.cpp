
#include "infix_to_postfix_conversion.h"
#include <iostream>
#include <string>

//constructor for infix_to_postfix_conversion
infix_to_postfix_conversion::infix_to_postfix_conversion(Expression_Command* expCmd,
	Stack<Expression_Command*>& stack_cmd,
	Stack<char>& stack_exp,
	Array<Expression_Command*>& postfix,
	int& postfix_exp,
	bool checkNumber):
		exp_(expCmd),
		stack_exp_cmd(stack_cmd),
		stack_exp(stack_exp),
		postfix_(postfix),
		postfix_exp_(postfix_exp),
		checkNumber_(checkNumber)
	{
	this->infix_to_postfix_conversion_();
	}

//destructor for infix_to_postfix_conversion
infix_to_postfix_conversion::~infix_to_postfix_conversion(){}

bool infix_to_postfix_conversion::infix_to_postfix_conversion_() {
	//Check for numbers
	if (checkNumber_) {
		postfix_.set(postfix_exp_, exp_);   
		++postfix_exp_;
	}
	else {
		//check for size 
			if (stack_exp_cmd.size() == 0) {
				stack_exp_cmd.push(exp_);   
				stack_exp.push('*'); 
			}
			else {
				if (stack_exp.top() == '(') {
					stack_exp_cmd.push(exp_);
					stack_exp.push('*');
					return true;
					}
				//checking the priority of expressions
				bool priority_operation = check_precedence_of_Expressions(exp_, stack_exp_cmd.top());
				if (priority_operation || stack_exp.top() == '(') {
					stack_exp_cmd.push(exp_);
					stack_exp.push('*');
				}
				else {
					// keep setting the postfix expression until we get priority 
					do {
						postfix_.set(postfix_exp_, stack_exp_cmd.top());
						++postfix_exp_;
						stack_exp_cmd.pop();
						stack_exp.pop();
					}
					while((stack_exp_cmd.size()!=0) && !(check_precedence_of_Expressions(exp_, stack_exp_cmd.top())) && stack_exp.top() != '(');
					stack_exp_cmd.push(exp_);
					stack_exp.push('*');
				}
			}
	}
	return true;
}
//Check for the precendence of expressions 
bool infix_to_postfix_conversion::check_precedence_of_Expressions(Expression_Command * leftExpression, Expression_Command * rightExpression) {
	//checking high priority expressions
	int less_priority= checkPriorityOfExpression(leftExpression);
	int high_priority= checkPriorityOfExpression(rightExpression);

	if (less_priority >= 0 && high_priority >=0){
        if(less_priority < high_priority)
            return true;
        else
            return false;
	}

	return false;
}

//get precedenceOfExpression otherwise return -1
int infix_to_postfix_conversion::checkPriorityOfExpression(Expression_Command * exp) {
	int precedenceOfExpression = exp->precedenceOfExpression();
	if(precedenceOfExpression > 0){
		return precedenceOfExpression;
	}else{
		return -1;
	}
}
