#include "problem_1264.h"
#include <iostream>
#include <string>

void solve_problem_1264() {
    std::cout << "=== 1264번 모음의 개수 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    while (true) {
        std::string line;
        std::getline(std::cin, line);
        if (line == "#") {
            break;
        } else {
            int cnt = 0;
            for (const char i : line) {
                if (i == 'a' || i == 'A' ||
                    i == 'e' || i == 'E' ||
                    i == 'i' || i == 'I' ||
                    i == 'o' || i == 'O' ||
                    i == 'u' || i == 'U') {
                    cnt++;
                }
            }
            std::cout << cnt << '\n';
        }
    }
    std::cout << "================================" << std::endl;
}
