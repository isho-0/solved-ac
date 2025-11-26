#include "problem_11022.h"
#include <iostream>

void solve_problem_11022() {
    std::cout << "=== 11022번 A + B - 8 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;

    for (int i = 0; i < t; i++) {
        int a, b;
        std::cin >> a >> b;

        std::cout << "Case #" << i + 1 << ": " << a << " + " << b << " = " << a + b << '\n';
    }

    std::cout << "================================" << std::endl;
}
