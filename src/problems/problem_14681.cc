#include "problem_14681.h"
#include <iostream>

void solve_problem_14681() {
    std::cout << "=== 14681번 사분면 고르기 문제 해결 ===" << std::endl;

    int x, y;
    std::cin >> x >> y;

    if (x > 0 && y > 0) {
        std::cout << "1\n";
    }else if (x > 0 && y < 0) {
        std::cout << "4\n";
    }else if (x < 0 && y > 0) {
        std::cout << "2\n";
    }else if (x < 0 && y < 0) {
        std::cout << "3\n";
    }

    std::cout << "================================" << std::endl;
}