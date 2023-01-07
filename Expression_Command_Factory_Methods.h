
#ifndef _EXPRESSION_COMMAND_FACTORY_METHODS_H_
#define _EXPRESSION_COMMAND_FACTORY_METHODS_H_
#include "Addition.h"
#include "Subtraction.h"
#include "Mulitiplication.h"
#include "Division.h"
#include "Modulus.h"
#include "Numbers.h"
class Expression_Command_Factory_Methods{
public:
	//constructor for Expression_Command_Factory_Methods
	Expression_Command_Factory_Methods();

	//destructor for Expression_Command_Factory_Methods
	virtual ~Expression_Command_Factory_Methods();

	//number command
	virtual Numbers * create_numbers_command (int n)=0;

	//addtion command
	virtual Addition * create_addition_command(void)=0;

	//subtraction command
	virtual Subtraction * create_subtraction_command(void)=0;

	//division command
	virtual Division * create_division_command(void)=0;

	//multiplication command
	virtual Mulitiplication * create_multiplication_command(void)=0;

	//modulus command
	virtual Modulus * create_modulus_command(void)=0;
private:
	Expression_Command_Factory_Methods(const Expression_Command_Factory_Methods&);
	const Expression_Command_Factory_Methods& operator=(const Expression_Command_Factory_Methods&);
};
#endif