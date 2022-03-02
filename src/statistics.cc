#include "statistics.h"

void DisplayTestResult(Statistics statistics)
{
    double result;

    result = (statistics.correct_answers / (statistics.correct_answers + statistics.incorrect_answers)) * 100;
    std::cout << "Correct answers: " << statistics.correct_answers << std::endl;
    std::cout << "Incorrect answers: " << statistics.incorrect_answers << std::endl;
    std::cout << "Percentage result: " << result << "%" << std::endl;
}
