#include "problem_2292.h"
#include <iostream>

void solve_problem_2292() {
    std::cout << "=== 2292번 벌집 문제 해결 ===" << std::endl;

    long long N;
    std::cin >> N;

    if (N == 1) {
        std::cout << 1;
        return;
    }

    long long layer = 1;
    long long range_end = 1;

    while (range_end < N) {
        range_end += 6 * layer;
        layer++;
    }

    std::cout << layer;

    std::cout << "================================" << std::endl;
}
