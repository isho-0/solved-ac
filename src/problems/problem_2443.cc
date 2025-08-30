#include "problem_2443.h"
#include <iostream>

void solve_problem_2443() {
    std::cout << "=== 2443번 별 찍기-6 문제 해결 ===" << std::endl;
    
    int n;
    std::cout << "N을 입력하세요 : ";
    std::cin >> n;
    
    std::cout << "입력 : n = " << n << std::endl;
    std::cout << "출력 : " << std::endl;
    
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
