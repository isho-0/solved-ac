#include "problem_18238.h"
#include <iostream>

void solve_problem_18238() {
    std::cout << "=== 18238번 ZOAC 2 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string input;
    std::cin >> input;

    int total = 0;
    char cur = 'A';

    for (char c : input) {
        int diff = std::abs(cur - c);
        total += std::min(diff, 26 - diff);
        cur = c;
    }

    std::cout << total << "\n";

    std::cout << "================================" << std::endl;
}
