#include "problem_1676.h"
#include <iostream>

void solve_problem_1676() {
    std::cout << "=== 1676번 팩토리얼 0의 개수 문제 해결 ===" << std::endl;

    int n;
    std::cin >> n;

    int count = 0;
    for (int i = 5; i <= n; i *= 5) {
        count += n / i;
    }

    std::cout << "================================" << std::endl;
}
