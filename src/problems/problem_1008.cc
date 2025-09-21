#include "problem_1008.h"
#include <iostream>
#include <iomanip>

void solve_problem_1008() {
    std::cout << "=== 1008번 A/B 문제 해결 ===" << std::endl;

    double a, b;
    std::cin >> a >> b;

    std::cout << std::fixed << std::setprecision(9) << a / b << "\n";

    std::cout << "================================" << std::endl;
}