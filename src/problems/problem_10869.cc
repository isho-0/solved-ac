#include "problem_10869.h"
#include <iostream>

void cal(const int a, const int b) {
    std::cout << a + b << "\n";
    std::cout << a - b << "\n";
    std::cout << a * b << "\n";
    std::cout << a / b << "\n";
    std::cout << a % b << "\n";
}

void solve_problem_10869() {
    std::cout << "=== 10869번 사칙연산 문제 해결 ===" << std::endl;

    int a, b;
    std::cin >> a >> b;

    cal(a, b);

    std::cout << "================================" << std::endl;
}
