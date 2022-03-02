#ifndef COMPLEX_NUMBER_H_
#define COMPLEX_NUMBER_H_

#include <iostream>
#include <cmath>

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

/**
 * @brief Subtract two complex numbers
 *
 * @param number1 first complex number
 * @param number2 second complex number
 * @return ComplexNumber result
 */
ComplexNumber operator-(const ComplexNumber &number1, const ComplexNumber &number2);

/**
 * @brief Multiply two complex numbers
 *
 * @param number1 first complex number
 * @param number2 second complex number
 * @return ComplexNumber result
 */
ComplexNumber operator*(const ComplexNumber &number1, const ComplexNumber &number2);

/**
 * @brief Divide two complex numbers
 *
 * @param number1 first complex number
 * @param number2 second complex number
 * @return ComplexNumber result
 */
ComplexNumber operator/(const ComplexNumber &number1, const ComplexNumber &number2);

/**
 * @brief Calculate modulus of complex number
 *
 * @param number complex number
 * @return double result
 */
double Modulus(const ComplexNumber &number);

/**
 * @brief Display complex number
 *
 * @param output stream
 * @param number complex number
 * @return std::ostream&
 */
std::ostream &operator<<(std::ostream &output, const ComplexNumber &number);

/**
 * @brief Allow to input complex number
 *
 * @param input stream
 * @param number complex number
 * @return std::igit stream&
 */
std::istream &operator>>(std::istream &input, ComplexNumber &number);

#endif // COMPLEX_NUMBER_H_