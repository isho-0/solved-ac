#include "problem_11050.h"
#include <iostream>

static int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

void solve_problem_11050() {
    std::cout << "=== 11050번 이항 계수 1 문제 해결 ===" << std::endl;

    int n, k;
    std::cin >> n >> k;

    int answer = factorial(n) / (factorial(k) * factorial(n - k));
    std::cout << answer << "\n";

    std::cout << "================================" << std::endl;
}
