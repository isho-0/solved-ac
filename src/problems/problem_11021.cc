#include "problem_11021.h"
#include <iostream>

void solve_problem_11021() {
    std::cout << "=== 11021번 A+B - 7 문제 해결 ===" << std::endl;
    int a, b;

    int test_case;
    std::cin >> test_case;

    for(int i = 1; i <= test_case; i++){
        std::cin >> a >> b;
        std::cout << "Case #" << i << ": " << a + b <<"\n";
    }

    std::cout << "================================" << std::endl;
}