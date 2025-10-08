#include "problem_27866.h"
#include <iostream>

void solve_problem_27866() {
    std::cout << "=== 27866번 문자와 문자열 문제 해결 ===" << std::endl;

    std::string word;
    std::cin >> word;

    int index = 0;
    std::cin >> index;

    std::cout << word[index - 1] << std::endl;

    std::cout << "================================" << std::endl;
}
