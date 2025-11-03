#include "problem_5988.h"
#include <iostream>
#include <string>

void solve_problem_5988() {
    std::cout << "=== 5988번 홀수일까 짝수일까 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int test_case;
    std::cin >> test_case;

    for (int i = 0; i < test_case; i++) {
        std::string num;
        std::cin >> num;

        char last_digit = num.back();
        if ((last_digit - '0') % 2 == 0) {
            std::cout << "even\n";
        } else {
            std::cout << "odd\n";
        }
    }

    std::cout << "================================" << std::endl;
}
