#include "problem_16486.h"
#include <iostream>

void solve_problem_16486() {
    std::cout << "=== 16486번 운동장 한 바퀴 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    double d1, d2;
    std::cin >> d1 >> d2;

    const double pi = 3.141592;
    double perimeter = 2 * d1 + 2 * pi * d2;

    std::cout.precision(6);
    std::cout << std::fixed << perimeter << "\n";

    std::cout << "================================" << std::endl;
}
