#include "complex_number.h"

ComplexNumber operator+(const ComplexNumber &number1, const ComplexNumber &number2)
{
    ComplexNumber result;

    result.real = number1.real + number2.real;
    result.imag = number1.imag + number2.imag;

    return result;
}
