#ifndef _STACK_COMMAND_FACTORY_METHODS_H_
#define _STACK_COMMAND_FACTORY_METHODS_H_

#include "Expression_Command_Factory_Methods.h"

//stack factory inherits expression factory
class Stack_Command_Factory_Methods : public Expression_Command_Factory_Methods
{
public:
	//constructor for Stack_Command_Factory_Methods
	Stack_Command_Factory_Methods();

	//destructor for Stack_Command_Factory_Methods
	virtual ~Stack_Command_Factory_Methods(void);

	virtual Numbers * create_numbers_command(int n);

	virtual Addition * create_addition_command(void);

	virtual Subtraction * create_subtraction_command(void);

	virtual Division * create_division_command(void);

	virtual Mulitiplication * create_multiplication_command(void);

	virtual Modulus * create_modulus_command(void);
};

#endif