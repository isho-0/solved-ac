#include "problem_2490.h"
#include <iostream>

void solve_problem_2490() {
    std::cout << "=== 2490번 윷놀이 문제 해결 ===" << std::endl;

    for (int i = 1; i <= 3; i++) {
        int n[4];
        int sum = 0;

        for (int j = 0; j < 4; j++) {
            std::cin >> n[j];
            sum += n[j];
        }
        if (sum == 0) std::cout << "D\n";
        if (sum == 1) std::cout << "C\n";
        if (sum == 2) std::cout << "B\n";
        if (sum == 3) std::cout << "A\n";
        if (sum == 4) std::cout << "E\n";
    }

    std::cout << "================================" << std::endl;
}
