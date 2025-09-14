#include "problem_9085.h"
#include <iostream>

void solve_problem_9085() {
    std::cout << "=== 9085번 더하기 문제 해결 ===" << std::endl;

    int test_cases;
    std::cin >> test_cases;

    for (int i = 0; i < test_cases; i++) {
        int num_count;
        std::cin >> num_count;

        int case_sum = 0;

        for (int j = 0; j < num_count; j++) {
            int value;
            std::cin >> value;
            case_sum += value;
        }

        std::cout << case_sum << "\n";
    }

    std::cout << "================================" << std::endl;
}
