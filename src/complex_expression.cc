#include <complex_expression.h>

ComplexNumber Calculate(ComplexExpression expression)
{
    ComplexNumber result;

    switch (expression.op)
    {
    case Op_Add:

        result = expression.firstComponent + expression.secondCompenent;
        break;

    case Op_Subtract:

        result = expression.firstComponent - expression.secondCompenent;
        break;

    case Op_Multiply:

        result = expression.firstComponent * expression.secondCompenent;
        break;

    case Op_Divide:

        result = expression.firstComponent / expression.secondCompenent;
        break;
    }

    return result;
}

bool CheckAnswer(ComplexExpression expression, ComplexNumber answer)
{
    ComplexNumber correct = Calculate(expression);
    return ((std::abs(correct.real - answer.real) < 0.01) && (std::abs(correct.imag - answer.imag) < 0.01));
}