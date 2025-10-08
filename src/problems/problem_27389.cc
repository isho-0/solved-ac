#include "problem_27389.h"
#include <iostream>
#include <iomanip>

void solve_problem_27389() {
    std::cout << "=== 27389번 Metronome 문제 해결 ===" << std::endl;

    int n;
    std::cin >> n;

    double result = (double)n / 4;
    std::cout << std::fixed << std::setprecision(2) << result << "\n";

    std::cout << "================================" << std::endl;
}
