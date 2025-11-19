#include "problem_30030.h"
#include <iostream>

void solve_problem_30030() {
    std::cout << "=== 30030번 스위트콘 가격 구하기 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int b;
    std::cin >> b;

    std::cout << b / 11 * 10 << '\n';

    std::cout << "================================" << std::endl;
}
