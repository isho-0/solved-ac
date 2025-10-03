#include "problem_1157.h"
#include <iostream>
#include <string>
#include <cctype>

void solve_problem_1157() {
    std::cout << "=== 1157번 단어 공부 문제 해결 ===" << std::endl;

    std::string word;
    getline(std::cin, word);

    for (int i = 0; i < word.size(); i++) {
        word[i] = std::toupper(word[i]);
    }

    int used_alphabet[26] = {0};
    for (char c : word) {
        used_alphabet[c - 'A']++;
    }

    int max_count = 0;
    char result = '?';

    for (int i = 0; i < 26; i++) {
        if (used_alphabet[i] > max_count) {
            max_count = used_alphabet[i];
            result = 'A' + i;
        }
        else if (used_alphabet[i] == max_count) {
            result = '?';
        }
    }

    std::cout << result << "\n";

    std::cout << "================================" << std::endl;
}
