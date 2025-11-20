#include "problem_1212.h"
#include <iostream>
#include <string>

void solve_problem_1212() {
    std::cout << "=== 1212번 8진수 2진수 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string octal;
    std::cin >> octal;

    if (octal == "0") {
        std::cout << "0\n";
        return;
    }

    std::string result;

    int first = octal[0] - '0';
    if (first == 1) result += "1";
    else if (first == 2) result += "10";
    else if (first == 3) result += "11";
    else if (first == 4) result += "100";
    else if (first == 5) result += "101";
    else if (first == 6) result += "110";
    else if (first == 7) result += "111";

    for (std::size_t i = 1; i < octal.size(); ++i) {
        int v = octal[i] - '0';
        if (v == 0) result += "000";
        else if (v == 1) result += "001";
        else if (v == 2) result += "010";
        else if (v == 3) result += "011";
        else if (v == 4) result += "100";
        else if (v == 5) result += "101";
        else if (v == 6) result += "110";
        else if (v == 7) result += "111";
    }

    std::cout << result << '\n';

    std::cout << "================================" << std::endl;
}
