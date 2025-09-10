#include "problem_2748.h"
#include <iostream>

void solve_problem_2748() {
    std::cout << "=== 2748번 피보나치 수 2 문제 해결 ===" << std::endl;

    int n;
    std::cin >> n;

    if (n == 0) {
        std::cout << 0;
        return;
    }

    long long a = 0, b = 1, fib;
    for (int i = 2; i <= n; i++) {
        fib = a + b;
        a = b;
        b = fib;
    }

    std::cout << (n == 1 ? 1 : b) << "\n";

    std::cout << "================================" << std::endl;
}
