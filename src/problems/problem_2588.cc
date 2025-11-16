#include "problem_2588.h"
#include <iostream>

void solve_problem_2588() {
    std::cout << "=== 2588번 곱셉 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int a, b;
    std::cin >> a >> b;

    int b1 = b % 10;
    int b10 = (b / 10) % 10;
    int b100 = (b / 100) % 10;

    std::cout << a * b1 << '\n';
    std::cout << a * b10 << '\n';
    std::cout << a * b100 << '\n';
    std::cout << a * b << '\n';

    std::cout << "================================" << std::endl;
}
