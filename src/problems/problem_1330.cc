#include "problem_1330.h"
#include <iostream>

void solve_problem_1330() {
    std::cout << "=== 1330번 두 수 비교하기 문제 해결 ===" << std::endl;

    int a, b;
    std::cin >> a >> b;

    if (a > b) {
        std::cout << ">\n";
    }else if (a < b) {
        std::cout << "<\n";
    }else {
        std::cout << "==\n";
    }

    std::cout << "================================" << std::endl;
}