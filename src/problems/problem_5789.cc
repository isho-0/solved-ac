#include "problem_5789.h"
#include <iostream>
#include <string>

void solve_problem_5789() {
    std::cout << "=== 5789번 한다 안한다 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int test_case = 0;
    std::cin >> test_case;

    std::string num;
    for (int i = 0; i < test_case; i++) {
        std::cin >> num;

        if (const int mid = num.size() / 2; num[mid - 1] == num[mid]) {
            std::cout << "Do-it\n";
        } else {
            std::cout << "Do-it-Not\n";
        }
    }

    std::cout << "================================" << std::endl;
}
