#include "problem_10991.h"
#include <iostream>

void solve_problem_10991() {
    std::cout << "=== 10991번 별 찍기-16 문제 해결 ===" << std::endl;

    int n;

    std::cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++) {
            std::cout << " ";
        }

        for (int j = 0; j < i; j++) {
            std::cout << "*";
            if (j != i - 1) {
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }

    std::cout << "================================" << std::endl;
}
