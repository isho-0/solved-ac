#include "problem_2438.h"
#include <iostream>

void solve_problem_2438() {
    std::cout << "=== 2438번 별 찍기-1 문제 해결 ===" << std::endl;
    
    int n;
    std::cout << "N을 입력하세요 : ";
    std::cin >> n;
    
    std::cout << "입력 : n = " << n << std::endl;
    std::cout << "출력 : " << std::endl;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    
    std::cout << "================================" << std::endl;
}
