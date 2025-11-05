#include "problem_18108.h"
#include <iostream>

void solve_problem_18108() {
    std::cout << "=== 18108번 1998년생인 내가 태국에서는 2541년생?! 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int year;
    std::cin >> year;

    std::cout << year - 543 << '\n';

    std::cout << "================================" << std::endl;
}