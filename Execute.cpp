#include "Execute.h"
#include "Postfix_Conversion.h"
#include "Expression_Evaluation.h"


//constructor for Execute
Execute::Execute(std::string & input)
	:	input(input)
{
	//Perform execution of commands
	this->executeOperation(input);
}

//destructor for Execute
Execute::~Execute(){
}

void Execute::executeOperation(std::string &input) {
	std::string infixExpression = input;
	Stack_Command_Factory_Methods stack_Command_Factory_Methods;
	Array<Expression_Command*> postfixExpression;
	int postfixExp_ = 0;
	//convert input into the postfix expression
	if (input != "") {
		try {
			Postfix_Conversion postfix(infixExpression, stack_Command_Factory_Methods,postfixExp_, postfixExpression);
			//evaluation
			int output = 0;
			try {
				//evaluate results after operations
				Expression_Evaluation exp_(postfixExpression, postfixExp_, output);
				if (exp_.postfix_expression_evaluation()) {
					std::cout << "The postfix expression evaluation is  : " << output << endl;
				}
				else {
					std::cout << "Issue in evaluating postfix expression";
				}
			}
			catch (std::exception& e) {
				std::cout << "Error " << e.what() << endl;
			}
			// clean memory
			Array_Iterator<Expression_Command*> iterator_(postfixExpression, postfixExp_);
			for (; !iterator_.is_done(); iterator_.advance()) {
				if (0 != *iterator_) {
					delete* iterator_;
				}
			}
		}
		catch (...) {
			std::cout << "Unexpected Expression" << endl;
		}
	}
}
