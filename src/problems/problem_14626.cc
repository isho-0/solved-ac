#include "problem_14626.h"
#include <iostream>
#include <vector>

void solve_problem_14626() {
    std::cout << "=== 14626번 ISBN 문제 해결 ===" << std::endl;

    std::string s;
    std::cin >> s;

    int p;
    for (int i = 0; i < 13; i++) {
        if (s[i] == '*')p = i;
    }

    for (int d = 0; d < 10; d++) {
        int sum = 0;
        for (int i = 0; i < 13; i++) {
            int x = (i == p ? d : s[i] - '0');
            sum += x * (i % 2 ? 3 : 1);
        }

        if (sum % 10 == 0) {
            std::cout << d;
            return;
        }
    }

    std::cout << "================================" << std::endl;
}
