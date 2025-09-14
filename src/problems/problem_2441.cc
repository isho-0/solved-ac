#include "problem_2441.h"
#include <iostream>

void solve_problem_2441() {
    std::cout << "=== 2441번 별 찍기-4 문제 해결 ===" << std::endl;

    int n;
    std::cout << "N을 입력하세요 : ";
    std::cin >> n;

    std::cout << "입력 : n = " << n << "\n";
    std::cout << "출력 : " << "\n";

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j <= i - 1) {
                std::cout << " ";
            } else {
                std::cout << "*";
            }
        }
        std::cout << "\n";
    }

    std::cout << "================================" << std::endl;
}
