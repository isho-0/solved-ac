#include "problem_10995.h"
#include <iostream>

void solve_problem_10995() {
    std::cout << "=== 10995번 별 찍기-20 문제 해결 ===" << std::endl;
    int n;

    std::cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            for (int j = 1; j <= n; j++) {
                std::cout << " *";
            }
        } else {
            for (int j = 1; j <= n; j++) {
                std::cout << "* ";
            }
        }
        std::cout << "\n";
    }

    std::cout << "================================" << std::endl;
}
