#ifndef COMPLEX_EXPRESSION_H
#define COMPLEX_EXPRESSION_H

#include "complex_number.h"

/**
 * @brief Model a set of arithmetic operators
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
 * @brief Model the concept of complex expression
 *
 */
struct ComplexExpression
{
    ComplexNumber firstComponent;
    Operator op;
    ComplexNumber secondCompenent;
};

/**
 * @brief Calculate a result of complex expression
 *
 * @param expression
 * @return ComplexNumber result of caluclation
 */
ComplexNumber Calculate(ComplexExpression expression);

/**
 * @brief
 *
 * @param expression
 * @param number
 * @return true
 * @return false
 */
bool CheckAnswer(ComplexExpression expression, ComplexNumber number);

/**
 * @brief Display complex expression
 *
 * @param output
 * @param expression
 * @return std::ostream&
 */
std::ostream &operator<<(std::ostream &output, const ComplexExpression &expression);

/**
 * @brief Allow to input complex expression
 * 
 * @param input 
 * @param expression 
 * @return std::istream& 
 */
std::istream &operator>>(std::istream &input, ComplexExpression &expression);

#endif // COMPLEX_EXPRESSION_H