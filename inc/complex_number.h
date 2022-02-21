#ifndef COMPLEX_NUMBER_H_
#define COMPLEX_NUMBER_H_

#include <iostream>

/**
 * @brief Model the concept of a complex number
 *
 */
struct ComplexNumber
{
    double real;
    double imag;
};

/**
 * @brief Add two complex numbers
 * 
 * @param number1 first complex number
 * @param number2 second complex number
 * @return ComplexNumber result
 */
ComplexNumber operator+(const ComplexNumber &number1, const ComplexNumber &number2);

#endif // COMPLEX_NUMBER_H_