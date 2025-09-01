#include "problem_8393.h"
#include <iostream>

void solve_problem_8393() {
    std::cout << "=== 8393번 합 문제 해결 ===" << std::endl;
    
    int n;
    std::cout << "N을 입력하세요 : ";
    std::cin >> n;
    
    std::cout << "입력 : n = " << n << "\n";
    std::cout << "출력 : " << "\n";
    
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    
    std::cout << sum << "\n";
    
    std::cout << "================================" << std::endl;
}



