#include "problem_2739.h"
#include <iostream>

void solve_problem_2739() {
    std::cout << "=== 2739번 구구단 문제 해결 ===" << std::endl;

    int n;
    std::cout << "N을 입력하세요 : ";
    std::cin >> n;

    std::cout << "입력 : n = " << n << "\n";
    std::cout << "출력 : " << "\n";

    for (int i = 1; i <= 9; i++) {
        std::cout << n << " * " << i << " = " << n * i << "\n";
    }

    std::cout << "================================" << std::endl;
}
