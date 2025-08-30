#include "problem_2741.h"
#include <iostream>

void solve_problem_2741() {
    std::cout << "=== 2741번 N 찍기 문제 해결 ===" << std::endl;
    
    int n;
    std::cout << "N을 입력하세요 : ";
    std::cin >> n;
    
    std::cout << "입력 : n = " << n << std::endl;
    std::cout << "출력 : " << std::endl;
    
    for (int i = 1; i <= n; i++) {
        std::cout << i << std::endl;
    }
    
    std::cout << "================================" << std::endl;
}
