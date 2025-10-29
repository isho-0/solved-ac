#include "problem_20254.h"
#include <iostream>

void solve_problem_20254() {
    std::cout << "=== 20254번 Site Score 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int ur, tr, uo, to;
    std::cin >> ur >> tr >> uo >> to;

    int score = 56 * ur + 24 * tr + 14 * uo + 6 * to;
    std::cout << score << '\n';

    std::cout << "================================" << std::endl;
}
