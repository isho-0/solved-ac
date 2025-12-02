#include "problem_19945.h"
#include <iostream>
#include <cmath>

void solve_problem_19945() {
    std::cout << "=== 19945번 새로운 언어 CC 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    long long n;
    std::cin >> n;

    if (n == 0) {
        std::cout << 1;
    }
    else if (n > 0) {
        int bits = 0;
        while (n > 0) {
            n >>= 1;
            bits++;
        }
        std::cout << bits;
    }
    else {
        std::cout << 32;
    }

    std::cout << "================================" << std::endl;
}

