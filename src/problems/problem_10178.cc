#include "problem_10178.h"
#include <iostream>

void solve_problem_10178() {
    std::cout << "=== 10178 할로윈의 사탕 문제 해결 ===" << std::endl;

    int t;

    std::cin >> t;

    for (int i = 1; i <= t; i++) {
        int c, v;

        std::cin >> c >> v;

        std::cout << "You get " << c/v << " piece(s) and your dad gets " << c%v << " piece(s).\n";
    }

    std::cout << "================================" << std::endl;
}