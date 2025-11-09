#include "problem_25628.h"
#include <iostream>

void solve_problem_25628() {
    std::cout << "=== 25628번 햄버거 만들기 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int a, b;
    std::cin >> a >> b;

    int result = std::min(a / 2, b);
    std::cout << result << '\n';

    std::cout << "================================" << std::endl;
}
