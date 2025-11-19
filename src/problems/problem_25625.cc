#include "problem_25625.h"
#include <iostream>

void solve_problem_25625() {
    std::cout << "=== 25625번 샤틀버스 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int x, y;
    std::cin >> x >> y;

    if (x > y) {
        std::cout << x + y << '\n';
    }
    else {
        std::cout << y - x << '\n';
    }

    std::cout << "================================" << std::endl;
}
