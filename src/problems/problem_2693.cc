#include "problem_2693.h"
#include <iostream>
#include <vector>
#include <algorithm>

void solve_problem_2693() {
    std::cout << "=== 2693번 점수 집계 문제 해결 ===" << std::endl;

    int test_case;
    std::cin >> test_case;

    std::vector<int> numbers(10);
    for (int i = 0; i < test_case; i++) {
        for (int j = 0; j < 10; j++) {
            std::cin >> numbers[j];
        }
        std::sort(numbers.begin(), numbers.end());
        std::cout << numbers[7] << "\n";
    }

    std::cout << "================================" << std::endl;
}
