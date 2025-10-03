#include "problem_5218.h"
#include <iostream>
#include <string>

void solve_problem_5218() {
    std::cout << "=== 5218번 알파벳 거리 문제 해결 ===" << std::endl;

    int test_case;
    std::cin >> test_case;

    std::string first_word, second_word;
    for (int i = 0; i < test_case; i++) {
        std::cin >> first_word >> second_word;

        std::cout << "Distances: ";
        for (size_t i = 0; i < first_word.size(); i++) {
            int dist = (second_word[i] - first_word[i] + 26) % 26;
            std::cout << dist << " ";
        }
        std::cout << "\n";
    }

    std::cout << "================================" << std::endl;
}
