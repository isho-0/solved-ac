#include "problem_10808.h"
#include <iostream>
#include <string>

void solve_problem_10808() {
    std::cout << "=== 10808번 알파벳 개수 문제 해결 ===" << std::endl;

    std::string word;
    std::cin >> word;

    int alphabet[26] = {0};
    for (char c: word) {
        alphabet[c - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        std::cout << alphabet[i] << " ";
    }
    std::cout << "\n";

    std::cout << "================================" << std::endl;
}
