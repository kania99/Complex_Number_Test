#ifndef COMPLEX_EXPRESSION_H
#define COMPLEX_EXPRESSION_H

#include "complex_number.h"

/**
 * @brief Model a set of arithmetic operators. 
 * 
 */
enum Operator
{
    Op_Add,
    Op_Subtract,
    Op_Multiply,
    Op_Divide
};

/**
 * @brief Model the concept of complex expression. 
 * 
 */
struct ComplexExpression
{
    ComplexNumber firstComponent;
    Operator op;
    ComplexNumber secondCompenent;
};

/**
 * @brief Calculate a result of complex expression.
 * 
 * @param expression 
 * @return ComplexNumber result of caluclation
 */
ComplexNumber Calculate(ComplexExpression expression);


#endif // COMPLEX_EXPRESSION_H