#include "problem_1259.h"
#include <iostream>
#include <string>

void solve_problem_1259() {
    std::cout << "=== 1259번 팰린드롬수 문제 해결 ===" << std::endl;

    std::string num;

    while (true) {
        std::cin >> num;
        if (num == "0") break;

        bool palindrome = true;
        for (int i = 0; i < num.length() / 2; i++) {
            if (num[i] != num[num.length() - i - 1]) {
                palindrome = false;
                break;
            }
        }

        if (palindrome)
            std::cout << "yes\n";
        else
            std::cout << "no\n";
    }

    std::cout << "================================" << std::endl;
}
