#include "problem_27959.h"
#include <iostream>

void solve_problem_27959() {
    std::cout << "=== 27959번 초코바 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, m;
    std::cin >> n >> m;

    int bamgo = n * 100;
    if (bamgo >= m) {
        std::cout << "Yes\n";
    } else {
        std::cout << "No\n";
    }

    std::cout << "================================" << std::endl;
}