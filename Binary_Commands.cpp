#include <stdexcept>
#include "Binary_Commands.h"

//Constructor for Binary_Commands
Binary_Commands::Binary_Commands() {
}

//Destructor for Binary_Commands
Binary_Commands::~Binary_Commands() {
}

bool Binary_Commands::executeOperation(Stack<int> &st) {
	//Taking two number for evalutation
	int n1, n2;
	try{
		//getting n1 from top of stack and popping out
		n1 = st.top();
		st.pop();
		//getting n2 top of stack and popping out
		n2 = st.top();
		st.pop();
		//evaluate expressions and push into the stack
		st.push(this->evaluateExpression(n1, n2));
		return true; // if not an invalid argument
	}
	catch(...){
		//throwing error if there's an invlid argument
		throw std::invalid_argument("Invalid argument passed");
		return false;}
}



