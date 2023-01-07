#include "Expression_Evaluation.h"
#include <iostream>

Expression_Evaluation::Expression_Evaluation
		(Array<Expression_Command*> & postfix_,
		int & exp_,
		int & output_):
		postfix_(postfix_),
		exp_(exp_),
		output_(output_)
{
}

Expression_Evaluation::~Expression_Evaluation()
{
}


bool Expression_Evaluation::postfix_expression_evaluation(){
	Array_Iterator<Expression_Command*> iterator(postfix_, exp_);
	Stack<int> st;

	try{
		for (; !iterator.is_done() ; iterator.advance()) {
			(*iterator)->executeOperation(st);
		}
	} catch (std::exception &error) {
		// clean memory
			Array_Iterator<Expression_Command*> iterator2 (postfix_, exp_);
			for (; !iterator2.is_done() ; iterator2.advance()) {
				delete * iterator2;
			}
			return false;
		}

	if (st.size() == 1) {
	output_ = st.top();
	return true;
	}
	else{
		Array_Iterator<Expression_Command*> iterator3(postfix_, exp_);
		for (; !iterator3.is_done() ; iterator3.advance()) {
			delete * iterator3;
		}

		throw std::invalid_argument("Not a valid argument");
	}
}
