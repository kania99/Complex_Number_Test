#ifndef TEST_DATA_BASE_H
#define TEST_DATA_BASE_H

#include "complex_expression.h"

struct TestDataBase
{
    ComplexExpression *test_array;
    unsigned int number_of_questions;
    unsigned int question_index;
};

#endif // TEST_DATA_BASE_H