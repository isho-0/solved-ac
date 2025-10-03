#include "problem_24267.h"
#include <iostream>

void solve_problem_24267() {
    std::cout << "=== 24267번 알고리즘 수업 - 알고리즘의 수행 시간 6 문제 해결 ===" << std::endl;

    long long n;
    std::cin >> n;
    std::cout << n * (n - 1) * (n - 2) / 6 << "\n";
    std::cout << 3 << "\n";

    std::cout << "================================" << std::endl;
}
