#include "problem_5724.h"
#include <iostream>

void solve_problem_5724() {
    std::cout << "=== 5724번 파인만 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    while (true) {
        std::cin >> n;
        if (n == 0) break;
        int result = n * (n + 1) * (2 * n + 1) / 6;
        std::cout << result << '\n';
    }

    std::cout << "================================" << std::endl;
}
