#include "problem_2711.h"
#include <iostream>
#include <string>

void solve_problem_2711() {
    std::cout << "=== 2711번 오타맨 고창영 문제 해결 ===" << std::endl;

    int test_case;
    int debug_index = 0;
    std::string word;

    std::cin >> test_case;

    for (int i = 0; i < test_case; i++) {
        std::cin >> debug_index >> word;

        word.erase(debug_index - 1, 1);

        std::cout << word << "\n";
    }

    std::cout << "================================" << std::endl;
}
