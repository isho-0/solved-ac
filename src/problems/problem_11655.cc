#include "problem_11655.h"
#include <iostream>
#include <string>

void solve_problem_11655() {
    std::cout << "=== 11655번 ROT13 문제 해결 ===" << std::endl;

    std::string s;
    std::getline(std::cin, s);

    for (char &c : s) {
        if ('A' <= c && c <= 'Z') {
            c = (c - 'A' + 13) % 26 + 'A';
        }
        else if ('a' <= c && c <= 'z') {
            c = (c - 'a' + 13) % 26 + 'a';
        }
    }

    std::cout << s << "\n";

    std::cout << "================================" << std::endl;
}

