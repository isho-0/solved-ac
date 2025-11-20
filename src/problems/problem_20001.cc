#include "problem_20001.h"
#include <iostream>
#include <string>

void solve_problem_20001() {
    std::cout << "=== 20001번 고무오리 디버깅 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string input;
    std::getline(std::cin, input);

    if (input != "고무오리 디버깅 시작") {
        return;
    }

    int problem_count = 0;
    std::string line;

    while (true) {
        std::getline(std::cin, line);
        if (line == "고무오리 디버깅 끝") {
            break;
        }

        if (line == "문제") {
            problem_count++;
        }
        else if (line == "고무오리") {
            if (problem_count > 0) {
                problem_count--;
            } else {
                problem_count += 2;
            }
        }
    }

    if (problem_count == 0) {
        std::cout << "고무오리야 사랑해\n";
    } else {
        std::cout << "힝구\n";
    }

    std::cout << "================================" << std::endl;
}
