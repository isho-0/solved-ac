#include "problem_23808.h"
#include <iostream>
#include <string>

void solve_problem_23808() {
    std::cout << "=== 23808번 골뱅이 찍기 - ㅂ 문제 해결 ===" << std::endl;

    int n;
    std::cin >> n;

    for (int i = 0; i < 2 * n; i++) {
        std::cout << std::string(n, '@') << std::string(3 * n, ' ') << std::string(n, '@') << '\n';
    }

    for (int i = 0; i < n; i++) {
        std::cout << std::string(5 * n, '@') << '\n';
    }

    for (int i = 0; i < n; i++) {
        std::cout << std::string(n, '@') << std::string(3 * n, ' ') << std::string(n, '@') << '\n';
    }

    for (int i = 0; i < n; i++) {
        std::cout << std::string(5 * n, '@') << '\n';
    }

    std::cout << "================================" << std::endl;
}
