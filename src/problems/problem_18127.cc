#include "problem_18127.h"
#include <iostream>

void solve_problem_18127() {
    std::cout << "=== 18127번 모형결정 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    long long a, b;
    std::cin >> a >> b;

    long long n = b + 1;
    long long result = ((a - 2) * n * n - (a - 4) * n) / 2;

    std::cout << result << '\n';

    std::cout << "================================" << std::endl;
}