#include "Stack_Command_Factory_Methods.h"

//Constructor for Stack_Command_Factory_Methods
Stack_Command_Factory_Methods::Stack_Command_Factory_Methods(){}

//Destructr for Stack_Command_Factory_Methods
Stack_Command_Factory_Methods::~Stack_Command_Factory_Methods(){}

//Returning objects 
Numbers * Stack_Command_Factory_Methods::create_numbers_command (int n) {
	return new Numbers(n);
}

Addition * Stack_Command_Factory_Methods::create_addition_command() {
	return new Addition();
}

Subtraction * Stack_Command_Factory_Methods::create_subtraction_command() {
	return new Subtraction();
}

Division * Stack_Command_Factory_Methods::create_division_command() {
	return new Division();
}

Mulitiplication* Stack_Command_Factory_Methods::create_multiplication_command() {
	return new Mulitiplication();
}

Modulus * Stack_Command_Factory_Methods::create_modulus_command() {
	return new Modulus();
}
	
