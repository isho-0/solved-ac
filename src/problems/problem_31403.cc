#include "problem_31403.h"
#include <iostream>
#include <string>

void solve_problem_31403() {
    std::cout << "=== 31403 A + B - C 문제 해결 ===" << std::endl;

    int a, b, c;
    std::cin >> a >> b >> c;

    std::cout << a + b - c << "\n";
    std::string s = std::to_string(a) + std::to_string(b);
    std::cout << stoi(s) - c << "\n";

    std::cout << "================================" << std::endl;
}
