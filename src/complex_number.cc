#include "complex_number.h"

ComplexNumber operator+(const ComplexNumber &number_1, const ComplexNumber &number_2)
{
    ComplexNumber result;

    result.real = number_1.real + number_2.real;
    result.imag = number_1.imag + number_2.imag;

    return result;
}

ComplexNumber operator-(const ComplexNumber &number_1, const ComplexNumber &number_2)
{
    ComplexNumber result;

    result.real = number_1.real - number_2.real;
    result.imag = number_1.imag - number_2.imag;

    return result;
}

ComplexNumber operator*(const ComplexNumber &number_1, const ComplexNumber &number_2)
{
    ComplexNumber result;

    result.real = number_1.real * number_2.real - number_1.imag * number_2.imag;
    result.imag = number_1.real * number_2.imag + number_1.imag * number_2.real;

    return result;
}

ComplexNumber operator/(const ComplexNumber &number_1, const ComplexNumber &number_2)
{
    ComplexNumber result;

    result.real = (number_1.real * number_2.real + number_1.imag * number_2.imag) / pow(Modulus(number_2), 2);
    result.imag = (number_1.imag * number_2.real - number_1.real * number_2.imag) / pow(Modulus(number_2), 2);

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