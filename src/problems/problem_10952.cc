#include "problem_10952.h"
#include <iostream>

void solve_problem_10952() {
    std::cout << "=== 10952번 A+B-5 문제 해결 ===" << std::endl;
    
    int a, b;
    
    while (true) {
        std::cout << "두 정수 A와 B를 입력하세요 : ";
        std::cin >> a >> b;
        
        if (a == 0 && b == 0) {
            break;
        }
        
        std::cout << "출력 : ";
        std::cout << a + b << "\n";
    }
    
    std::cout << "================================" << std::endl;
}

