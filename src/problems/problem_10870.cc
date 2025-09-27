#include "problem_10870.h"
#include <iostream>
#include <utility>

void solve_problem_10870() {
    std::cout << "=== 10870번 피보나치 수 5 문제 해결 ===" << std::endl;

    int n;
    std::cin >> n;

    long long a = 0, b = 1;

    for (int i = 1; i < n; i++) {
        std::swap(a, b);
        b += a;
    }

    std::cout << a << "\n";

    std::cout << "================================" << std::endl;
}
