#include "problem_2675.h"
#include <iostream>
#include <string>

void solve_problem_2675() {
    std::cout << "=== 2675번 문자열 반복 문제 해결 ===" << std::endl;

    int test_case;
    std::cin >> test_case;

    for (int i = 0; i < test_case; i++) {
        int repeat;
        std::string s;
        std::cin >> repeat >> s;

        for (char c : s) {
            for (int j = 0; j < repeat; j++) {
                std::cout << c;
            }
        }
        std::cout << "\n";
    }

    std::cout << "================================" << std::endl;
}