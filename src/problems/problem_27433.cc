#include "problem_27433.h"
#include <iostream>

static long long factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

void solve_problem_27433() {
    std::cout << "=== 27433번 팩토리얼 2 문제 해결 ===" << std::endl;

    int n;
    std::cin >> n;

    std::cout << factorial(n) << "\n";

    std::cout << "================================" << std::endl;
}
