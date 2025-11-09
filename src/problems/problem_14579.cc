#include "problem_14579.h"
#include <iostream>

void solve_problem_14579() {
    std::cout << "=== 14579번 덧셈과 곱셈 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int a, b;
    std::cin >> a >> b;

    const int mod = 14579;
    int result = 0;

    int sum = 0;
    for (int i = a; i <= b; i++) {
        sum = i * (i * 1) / 2;
        result = (result * sum) % mod;
    }
    std::cout << result << '\n';

    std::cout << "================================" << std::endl;
}
