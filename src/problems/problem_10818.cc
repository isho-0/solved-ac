#include "problem_10818.h"
#include <iostream>
#include <limits>

void solve_problem_10818() {
    std::cout << "=== 10818번 최소, 최대 문제 해결 ===" << std::endl;

    int test_case;
    std::cin >> test_case;

    int test_case_number;
    int max = std::numeric_limits<int>::min();
    int min = std::numeric_limits<int>::max();

    for (int i = 0; i < test_case; i++) {
        std::cin >> test_case_number;

        if (min > test_case_number) {
            min = test_case_number;
        }
        if (max < test_case_number) {
            max = test_case_number;
        }
    }

    std::cout << min << " " << max << "\n";

    std::cout << "================================" << std::endl;
}