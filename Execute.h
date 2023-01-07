
#ifndef _EXECUTE_H_
#define _EXECUTE_H_

#include "Stack.h"
#include "Expression_Command_Factory_Methods.h"
#include "Stack_Command_Factory_Methods.h"
#include "Postfix_Conversion.h"
#include "Expression_Command.h"
#include <string>
#include <iostream>

class Execute {
public:

    //constructor for execute
    Execute(std::string &input);

    //destructor for execute
    ~Execute();

    void executeOperation(std::string &input);

protected:
    std::string &input;
};



#endif