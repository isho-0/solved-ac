#include "problem_5597.h"
#include <iostream>

void solve_problem_5597() {
    std::cout << "=== 5597번 과제 안 내신 분..? 문제 해결 ===" << std::endl;

    bool submitted[31] = {false};

    for (int i = 0; i < 28; i++) {
        int n;
        std::cin >> n;
        submitted[n] = true;
    }

    for (int i = 1; i <= 30; i++) {
        if (!submitted[i]) {
            std::cout << i << "\n";
        }
    }

    std::cout << "================================" << std::endl;
}
