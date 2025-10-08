#include "problem_5717.h"
#include <iostream>

void solve_problem_5717() {
    std::cout << "=== 5717번 상근이의 친구들 문제 해결 ===" << std::endl;

    int m, f;

    while (true) {
        std::cin >> m >> f;
        if (m == 0 && f == 0)
            break;
        std::cout << m + f << '\n';
    }

    std::cout << "================================" << std::endl;
}
