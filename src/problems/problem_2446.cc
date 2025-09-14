#include "problem_2446.h"
#include <iostream>

void solve_problem_2446() {
    std::cout << "=== 2446번 별 찍기-9 문제 해결 ===" << std::endl;

    int n;
    std::cout << "N을 입력하세요 : ";
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++)
            std::cout << " ";
        for (int j = 0; j < 2 * (n - i) - 1; j++)
            std::cout << "*";
        std::cout << "\n";
    }

    for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j < i; j++)
            std::cout << " ";
        for (int j = 0; j < 2 * (n - i) - 1; j++)
            std::cout << "*";
        std::cout << "\n";
    }

    std::cout << "================================" << std::endl;
}
