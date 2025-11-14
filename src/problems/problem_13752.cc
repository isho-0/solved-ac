#include "problem_13752.h"
#include <iostream>

void solve_problem_13752() {
    std::cout << "=== 13752번 히스토그램 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        int k;
        std::cin >> k;

        for (int j = 0; j < k; j++) {
            std::cout << "=";
        }
        std::cout << '\n';
    }

    std::cout << "================================" << std::endl;
}
