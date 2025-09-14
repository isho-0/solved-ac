#include "problem_2010.h"
#include <iostream>

void solve_problem_2010() {
    std::cout << "=== 2010번 플러그 문제 해결 ===" << std::endl;

    int n;
    int multitab;
    int sum = 0;

    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cin >> multitab;
        sum += multitab;
    }

    std::cout << sum - (n - 1) << std::endl;

    std::cout << "================================" << std::endl;
}
