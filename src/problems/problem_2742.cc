#include "problem_2742.h"
#include <iostream>

void solve_problem_2742() {
    std::cout << "=== 2742번 기찍 N 문제 해결 ===" << std::endl;
    
    int n;
    std::cout << "N을 입력하세요 : ";
    std::cin >> n;
    
    std::cout << "입력 : n = " << n << "\n";
    std::cout << "출력 : " << "\n";
    
    for (int i = n; i >= 1; i--) {
        std::cout << i << "\n";
    }
    
    std::cout << "================================" << std::endl;
}

