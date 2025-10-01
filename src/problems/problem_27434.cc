#include "problem_27434.h"
#include <iostream>

void solve_problem_27434() {
    std::cout << "=== 27434번 팩토리얼 3 문제 해결 ===" << std::endl;

    int n;
    std::cin >> n;
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    std::cout << result << "\n";

    std::cout << "================================" << std::endl;
}
