#include "problem_10950.h"
#include <iostream>

void solve_problem_10950() {
    std::cout << "=== 10950번 A+B-3 문제 해결 ===" << std::endl;
    
    int t;
    std::cout << "T를 입력하세요 : ";
    std::cin >> t;
    
    std::cout << "입력 : T = " << t << "\n";
    
    int a, b;
    for (int i = t; i > 0; i--) {
        std::cin >> a >> b;
        std::cout << "입력 : A = " << a << ", B = " << b << "\n";
        std::cout << "출력 : " << a + b << "\n";
    }
    
    std::cout << "================================" << std::endl;
}




