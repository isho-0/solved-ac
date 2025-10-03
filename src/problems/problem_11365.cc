#include "problem_11365.h"
#include <iostream>
#include <string>
#include <algorithm>

void solve_problem_11365() {
    std::cout << "=== 11365번 !밀비 급일 문제 해결 ===" << std::endl;

    std::string line;
    while (true) {
        getline(std::cin, line);

        if (line == "END") break;

        std::reverse(line.begin(), line.end());
        std::cout << line << "\n";
    }

    std::cout << "================================" << std::endl;
}
