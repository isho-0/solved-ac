#include "problem_2744.h"
#include <iostream>

void solve_problem_2744() {
    std::cout << "=== 2744번 대소문자 바꾸기 문제 해결 ===" << std::endl;

    std::string word;
    std::cin >> word;

    for (int i = 0; i < word.length(); i++) {
        if (word[i] >= 65 && word[i] <= 90) {
            word[i] += 32;
        } else if (word[i] >= 97 && word[i] <= 122) {
            word[i] -= 32;
        }
    }
    std::cout << word << "\n";

    std::cout << "================================" << std::endl;
}
