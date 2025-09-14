#include "problem_2576.h"
#include <iostream>

void solve_problem_2576() {
    std::cout << "=== 2576번 홀수 문제 해결 ===" << std::endl;

    int odd_sum = 0;
    int odd_min = 0;
    bool found = false;

    for (int i = 0; i < 7; i++) {
        int x;
        std::cin >> x;

        if (x % 2 != 0) {
            if (!found) {
                odd_min = x;
                found = true;
            } else if (x < odd_min) {
                odd_min = x;
            }
            odd_sum += x;
        }
    }

    if (!found) {
        std::cout << "-1\n";
    } else {
        std::cout << odd_sum << "\n" << odd_min << "\n";
    }

    std::cout << "================================" << std::endl;
}
