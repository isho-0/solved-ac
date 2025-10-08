#include "problem_10992.h"
#include <iostream>

void solve_problem_10992() {
    std::cout << "=== 10992번 별 찍기 - 17 문제 해결 ===" << std::endl;

    int n;
    std::cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++) {
            std::cout << " ";
        }

        if (i == 1) {
            std::cout << "*";
        } else if (i == n) {
            for (int j = 0; j < 2 * n - 1; j++) {
                std::cout << "*";
            }
        } else {
            std::cout << "*";
            for (int j = 0; j < 2 * i - 3; j++) {
                std::cout << " ";
            }
            std::cout << "*";
        }
        std::cout << "\n";
    }

    std::cout << "================================" << std::endl;
}
