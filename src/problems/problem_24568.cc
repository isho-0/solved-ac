#include "problem_24568.h"
#include <iostream>

void solve_problem_24568() {
    std::cout << "=== 24568번 Cupcake Party 문제 해결 ===" << std::endl;

    int r, s;
    std::cin >> r >> s;

    int result = r * 8 + s * 3 - 28;

    if (result < 0) {
        result = 0;
    }
    std::cout << result << "\n";

    std::cout << "================================" << std::endl;
}
