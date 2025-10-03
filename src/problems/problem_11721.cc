#include "problem_11721.h"
#include <iostream>
#include <string>

void solve_problem_11721() {
    std::cout << "=== 11721번 열 개씩 끊어 출력하기 문제 해결 ===" << std::endl;

    std::string word;
    std::cin >> word;

    for (int i = 1; i <= word.size(); i++) {
        std::cout << word[i - 1];
        if (i % 10 == 0) {
            std::cout << "\n";
        }
    }
    std::cout << "\n";

    std::cout << "================================" << std::endl;
}

