#include "problem_4458.h"
#include <iostream>
#include <cctype>

void solve_problem_4458() {
    std::cout << "=== 4458번 첫 글자를 대문자로 문제 해결 ===" << std::endl;

    int test_case;
    std::cin >> test_case;

    for (int i = 0; i < test_case; i++) {
        std::string line;
        std::getline(std::cin, line);

        if (!line.empty()) {
            line[0] = std::toupper(line[0]);
        }

        std::cout << line << "\n";
    }

    std::cout << "================================" << std::endl;
}
