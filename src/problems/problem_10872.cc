#include "problem_10872.h"
#include <iostream>

void solve_problem_10872() {
    std::cout << "=== 10872번 팩토리얼 문제 해결 ===" << std::endl;

    int n;
    int n_fac = 1;

    std::cin >> n;

    for (int i = n; i >= 1; i--) {
        n_fac *= i;
    }

    std::cout << n_fac << std::endl;

    std::cout << "================================" << std::endl;
}