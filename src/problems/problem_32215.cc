#include "problem_32215.h"
#include <iostream>

void solve_problem_32215() {
    std::cout << "=== 32215번 코드마스터 2024 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    long long n, m, k;
    std::cin >> n >> m >> k;

    long long dohun = m * k;
    long long chahyungjun = dohun + m;

    std::cout << chahyungjun << "\n";

    std::cout << "================================" << std::endl;
}
