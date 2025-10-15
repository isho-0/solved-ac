#include "problem_5928.h"
#include <iostream>

void solve_problem_5928() {
    std::cout << "=== 5928번 Contest Timing 문제 해결 ===" << std::endl;

    int D, H, M;
    std::cin >> D >> H >> M;

    int start = 11 * 24 * 60 + 11 * 60 + 11;
    int end = D * 24 * 60 + H * 60 + M;

    int diff = end - start;

    if (diff < 0) {
        std::cout << -1;
    } else {
        std::cout << diff;
    }
    std::cout << "================================" << std::endl;
}
