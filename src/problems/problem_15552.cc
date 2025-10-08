#include "problem_15552.h"
#include <iostream>

void solve_problem_15552() {
    std::cout << "=== 15552번 빠른 A+B 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    int a, b;

    for (int i = 0; i < t; i++) {
        std::cin >> a >> b;
        std::cout << a + b << "\n";
    }

    std::cout << "================================" << std::endl;
}
