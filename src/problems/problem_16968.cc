#include "problem_16968.h"
#include <iostream>
#include <string>

void solve_problem_16968() {
    std::cout << "=== 16968번 차량 번호판 1 문제 해결 ===" << std::endl;

    std::string pattern;
    std::cin >> pattern;

    long long result = 1;

    for (int i = 0; i < pattern.size(); i++) {
        if (pattern[i] == 'c') {
            if (i > 0 && pattern[i - 1] == 'c') {
                result *= 25;
            } else {
                result *= 26;
            }
        } else {
            if (i > 0 && pattern[i - 1] == 'd') {
                result *= 9;
            } else {
                result *= 10;
            }
        }
    }
    std::cout << result << '\n';

    std::cout << "================================" << std::endl;
}
