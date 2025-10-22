#include "problem_21756.h"
#include <iostream>

void solve_problem_21756() {
    std::cout << "=== 21756번 지우개 문제 해결 ===" << std::endl;

    int n;
    std::cin >> n;

    int result = 1;
    while (result * 2 <= n) {
        result *= 2;
    }

    std::cout << result << "\n";

    std::cout << "================================" << std::endl;
}
