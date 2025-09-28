#include "problem_8958.h"
#include <iostream>
#include <string>

void solve_problem_8958() {
    std::cout << "=== 8958번 OX퀴즈 문제 해결 ===" << std::endl;
    int test_case;
    std::cin >> test_case;
    std::cin.ignore();

    for (int i = 0; i < test_case; i++) {
        std::string s;
        std::getline(std::cin, s);

        int score = 0;
        int sum = 0;

        for (char c : s) {
            if (c == 'O') {
                score++;
                sum += score;
            }else {
                score = 0;
            }
        }
        std::cout << sum << "\n";
    }

    std::cout << "================================" << std::endl;
}