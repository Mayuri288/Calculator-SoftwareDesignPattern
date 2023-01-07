
#include "Postfix_Conversion.h"
#include "infix_to_postfix_conversion.h"


//constructor for Postfix_Conversion
Postfix_Conversion::Postfix_Conversion(const std::string& infixExpression,
	Expression_Command_Factory_Methods& factoryMethod,
	int &postfixExp_,
	Array<Expression_Command*>& postfixExpression)
	:infixExpression(infixExpression),
	factoryMethod(factoryMethod),
	postfixExp_(postfixExp_),
	postfixExpression(postfixExpression)
{
	this->Infix_to_Postfix_Conversion();
}

//destructor for Postfix_Conversion
Postfix_Conversion::~Postfix_Conversion() {}


bool Postfix_Conversion::Infix_to_Postfix_Conversion() {
	// making size 0 for the new input
	postfixExpression.resize(0);
	//Removing the space at end of input
	std::string input(infixExpression);
	input.erase(input.find_last_not_of(' ') + 1);
	//make length of postfix expression equal to length of input
	if (postfixExpression.size() < input.length()) {
		postfixExpression.resize(input.length());
	}
	std::istringstream in(input);
	std::string expression;
	Stack <Expression_Command*> exp_;
	Stack <char> stack;
	Expression_Command* command = 0;
	bool checkNumber = false;
	//
	while (!in.eof()) {
		in >> expression;
		//Check all the expressions
		//addition Command
		if (expression == "+") {
			command = factoryMethod.create_addition_command();
		}
		//subtraction Command
		else if (expression == "-") {
			command = factoryMethod.create_subtraction_command();
		}
		//multiplication Command
		else if (expression == "*") {
			command = factoryMethod.create_multiplication_command();
		}
		//division Command
		else if (expression == "/") {
			command = factoryMethod.create_division_command();
		}
		//modulus Command
		else if (expression == "%") {
			command = factoryMethod.create_modulus_command();
		}
		//check parenthesis
		else if (expression == "(") {
			stack.push('(');
			continue;
		}
		//if expression is ')' pop until '(' is found
		else if (expression == ")") {
			while (stack.top() != '(') {
				postfixExpression.set(postfixExp_, exp_.top());
				++postfixExp_;
				exp_.pop();
				stack.pop();
			}
			if (stack.top() == '(')
				stack.pop();
			continue;

		}
		else {
			//converting a character string to an integer value
			command = factoryMethod.create_numbers_command(atol(expression.c_str()));
			checkNumber = true;
		}
		//convert from infix to postfix
		infix_to_postfix_conversion(command, exp_, stack, postfixExpression, postfixExp_, checkNumber);
		checkNumber = false;
	}
	while (exp_.size() != 0) {
		postfixExpression.set(postfixExp_, exp_.top());
		++postfixExp_;
		exp_.pop();
	}
	
	return true;
};


