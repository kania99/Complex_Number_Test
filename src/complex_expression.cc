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