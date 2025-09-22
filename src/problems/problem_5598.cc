#include "problem_5598.h"
#include <iostream>
#include <string>

void solve_problem_5598() {
    std::cout << "=== 5598번 카이사르 암호 문제 해결 ===" << std::endl;

    std::string word;
    std::cin >> word;

    for (int i = 0; i < word.length(); i++) {
        char decoded = (word[i] - 'A' + 23) % 26 + 'A';
        std::cout << decoded;
    }
    std::cout << "\n";

    std::cout << "================================" << std::endl;
}
