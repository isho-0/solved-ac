#include "problem_15667.h"
#include <iostream>

void solve_problem_15667() {
    std::cout << "=== 15667번 2018 연세대학교 프로그래밍 경진대회 문제 해결 ===" << std::endl;

    int n;
    std::cin >> n;

    for (int i = 1; ; ++i) {
        long long total = 1LL + i + 1LL * i * i;
        if (total == n) {
            std::cout << i << "\n";
            return;
        }

        if (total > n) {
            break;
        }
    }

    std::cout << "================================" << std::endl;
}