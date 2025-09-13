#include "problem_2921.h"
#include <iostream>

void solve_problem_2921() {
    std::cout << "=== 2921번 도미노 문제 해결 ===" << std::endl;

    int n;
    std::cin >> n;

    long long result = 1LL * n * (n + 1) * (n + 2) / 2;
    std::cout << result << "\n";

    std::cout << "================================" << std::endl;
}