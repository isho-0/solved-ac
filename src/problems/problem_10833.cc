#include "problem_10833.h"
#include <iostream>

void solve_problem_10833() {
    std::cout << "=== 10833번 사과 문제 해결 ===" << std::endl;

    int n;

    std::cin >> n;

    int remain_apple_sum = 0;

    for (int i = 0; i < n; i++) {
        School school;
        std::cin >> school.students >> school.apple;
        remain_apple_sum += (school.apple % school.students);
    }
    std::cout << remain_apple_sum << "\n";

    std::cout << "================================" << std::endl;
}
