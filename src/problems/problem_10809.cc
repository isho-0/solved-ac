#include "problem_10809.h"
#include <iostream>

void solve_problem_10809() {
    std::cout << "=== 10809 알파벳 찾기 문제 해결 ===" << std::endl;

    std::string word;
    std::cin >> word;

    int pos[26];
    for (int i = 0; i < 26; i++) {
        pos[i] = -1;
    }

    for (int i = 0; i < word.length(); i++) {
        int idx = word[i] - 'a';

        if (pos[idx] == -1) {
            pos[idx] = i;
        }
    }

    for (int i = 0; i < 26; i++) {
        std::cout << pos[i] << " ";
    }
    std::cout << "\n";

    std::cout << "================================" << std::endl;
}
