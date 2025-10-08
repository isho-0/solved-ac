#include "problem_2754.h"
#include <iostream>
#include <string>
#include <iomanip>

void solve_problem_2754() {
    std::cout << "=== 2754번 학점계산 문제 해결 ===" << std::endl;

    std::string score;
    std::cin >> score;

    double result = 0.0;

    if (score == "A+") result = 4.3;
    else if (score == "A0") result = 4.0;
    else if (score == "A-") result = 3.7;
    else if (score == "B+") result = 3.3;
    else if (score == "B0") result = 3.0;
    else if (score == "B-") result = 2.7;
    else if (score == "C+") result = 2.3;
    else if (score == "C0") result = 2.0;
    else if (score == "C-") result = 1.7;
    else if (score == "D+") result = 1.3;
    else if (score == "D0") result = 1.0;
    else if (score == "D-") result = 0.7;
    else if (score == "F") result = 0.0;

    std::cout << std::fixed << std::setprecision(1) << result << "\n";

    std::cout << "================================" << std::endl;
}
