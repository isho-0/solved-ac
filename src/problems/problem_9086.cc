#include "problem_9086.h"
#include <iostream>

void solve_problem_9086() {
    std::cout << "=== 9086번 문자열 문제 해결 ===" << std::endl;

    int test_case = 0;
    std::cin >> test_case;

    for (int i = 0; i < test_case; i++) {
        std::string word;
        std::cin >> word;

        std::cout << word.front() << word.back() << "\n";
    }

    std::cout << "================================" << std::endl;
}
