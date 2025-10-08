#include "problem_15873.h"
#include <iostream>
#include <vector>

void solve_problem_15873() {
    std::cout << "=== 15873번 공백 없는 A+B 문제 해결 ===" << std::endl;

    std::string num;
    std::cin >> num;

    int a, b;
    if (num.length() == 2) {
        a = num[0] - '0';
        b = num[1] - '0';
    } else if (num.length() == 3) {
        if (num[1] == '0') {
            a = 10;
            b = num[2] - '0';
        } else {
            a = num[0] - '0';
            b = 10;
        }
    } else {
        a = 10;
        b = 10;
    }

    std::cout << a + b << "\n";

    std::cout << "================================" << std::endl;
}
