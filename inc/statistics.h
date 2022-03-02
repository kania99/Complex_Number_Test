#ifndef STATISTICS_H_
#define STATISTICS_H_

#include <iostream>

struct Statistics
{
    double correct_answers;
    double incorrect_answers;
};

/**
 * @brief Display test results
 * 
 * @param statistics 
 */
void DisplayTestResults(Statistics statistics);

#endif // STATISTICS_H_