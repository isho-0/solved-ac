#include "problem_2442.h"
#include <iostream>

void solve_problem_2442() {
    std::cout << "=== 2442번 별 찍기-5 문제 해결 ===" << std::endl;

    int n;
    std::cout << "N을 입력하세요 : ";
    std::cin >> n;

    std::cout << "입력 : n = " << n << "\n";
    std::cout << "출력 : " << "\n";

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            std::cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            std::cout << "*";
        }
        for (int j = 1; j <= i - 1; j++) {
            std::cout << "*";
        }
        std::cout << "\n";
    }

    std::cout << "================================" << std::endl;
}






