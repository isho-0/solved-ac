#include "problem_15964.h"
#include <iostream>

void solve_problem_15964() {
    std::cout << "=== 15964번 이상한 기호 문제 해결 ===" << std::endl;

    long long a, b;
    std::cin >> a >> b;

    std::cout << ((a + b) * (a - b)) << "\n";

    std::cout << "================================" << std::endl;
}