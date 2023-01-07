
#ifndef _POSTFIX_EVALUATION_H_
#define _POSTFIX_EVALUATION_H_

#include "Array.h"
#include "Stack.h"
#include "Array_Iterator.h"
#include "Expression_Command.h"

class Expression_Evaluation {
public:
    //constructor for Expression_Evaluation
    Expression_Evaluation(Array<Expression_Command*> &postfix_, int & exp_, int &output_);

    //destructor for Expression_Evaluation
    ~Expression_Evaluation();

    bool postfix_expression_evaluation ();


protected:
    Array<Expression_Command*> & postfix_;
    int &exp_;
    int &output_;
};


#endif
