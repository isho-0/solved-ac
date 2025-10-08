#include "problem_2902.h"
#include <iostream>
#include <string>

void solve_problem_2902() {
    std::cout << "=== 2902번 KMP는 왜 KMP일까? 문제 해결 ===" << std::endl;

    std::string s;
    std::cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            std::cout << s[i];
        }
    }

    std::cout << "\n";

    std::cout << "================================" << std::endl;
}
