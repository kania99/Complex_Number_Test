#include "complex_number.h"

ComplexNumber operator+(const ComplexNumber &number1, const ComplexNumber &number2)
{
    ComplexNumber result;

    result.real = number1.real + number2.real;
    result.imag = number1.imag + number2.imag;

    return result;
}

ComplexNumber operator-(const ComplexNumber &number1, const ComplexNumber &number2)
{
    ComplexNumber result;

    result.real = number1.real - number2.real;
    result.imag = number1.imag - number2.imag;

    return result;
}

ComplexNumber operator*(const ComplexNumber &number1, const ComplexNumber &number2)
{
    ComplexNumber result;

    result.real = number1.real * number2.real - number1.imag * number2.imag;
    result.imag = number1.imag * number2.imag + number1.imag * number2.real;

    return result;
}

ComplexNumber operator/(const ComplexNumber &number1, const ComplexNumber &number2)
{
    ComplexNumber result;

    result.real = (number1.real * number2.real + number1.imag * number2.imag) / pow(Modulus(number2), 2);
    result.imag = (number1.imag * number2.real - number1.real * number2.imag) / pow(Modulus(number2), 2);

    return result;
}

double Modulus(const ComplexNumber &number)
{
    return sqrt(pow(number.real, 2) + pow(number.imag, 2));
}

std::ostream &operator<<(std::ostream &output, const ComplexNumber &number)
{
    output << "(" << number.real << std::showpos << number.imag << "i)" << std::noshowpos;
    return output;
}

std::istream &operator>>(std::istream &input, ComplexNumber &number)
{
    input >> number.real >> number.imag;
    return input;
}