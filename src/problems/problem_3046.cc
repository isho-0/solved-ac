#include "problem_3046.h"
#include <iostream>

void solve_problem_3046() {
    std::cout << "=== 3046번 R2 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int r1, s;
    std::cin >> r1 >> s;

    int r2 = 2 * s - r1;
    std::cout << r2 << '\n';

    std::cout << "================================" << std::endl;
}
