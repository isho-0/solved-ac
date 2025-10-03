#include "problem_10987.h"
#include <iostream>
#include <string>

void solve_problem_10987() {
    std::cout << "=== 10987번 모음의 개수 문제 해결 ===" << std::endl;

    std::string word;
    std::cin >> word;

    int count = 0;
    for (int i = 0; i < word.size(); i++) {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u') {
            count++;
        }
    }
    std::cout << count << "\n";

    std::cout << "================================" << std::endl;
}