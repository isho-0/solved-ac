#include "problem_1003.h"
#include <iostream>

void solve_problem_1003() {
    std::cout << "=== 1003번 피보나치 함수 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int test_case = 0;
    std::cin >> test_case;

    int zero[41] = {1, 0};
    int one[41] = {0, 1};
    for (int i = 2; i <= 40; i++) {
        zero[i] = zero[i - 1] + zero[i - 2];
        one[i] = one[i - 1] + one[i - 2];
    }

    while (test_case--) {
        int n;
        std::cin >> n;
        std::cout << zero[n] << " " << one[n] << "\n";
    }

    std::cout << "================================" << std::endl;
}
