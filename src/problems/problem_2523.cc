#include "problem_2523.h"
#include <iostream>

void solve_problem_2523() {
    std::cout << "=== 2523번 별 찍기-13 문제 해결 ===" << std::endl;

    int n;
    std::cout << "N을 입력하세요 : ";
    std::cin >> n;

    std::cout << "입력 : n = " << n << "\n";
    std::cout << "출력 : " << "\n";

    for (int i = 1; i <= 2 * n - 1; i++) {
        int stars = (i <= n) ? n - i : i - n;

        for (int j = n; j > stars; j--)
            std::cout << "*";
        std::cout << "\n";
    }

    std::cout << "================================" << std::endl;
}
