#include "problem_2460.h"
#include <iostream>

void solve_problem_2460() {
    std::cout << "=== 2460번 지능형 기차 2 문제 해결 ===" << std::endl;

    int disembark, board;
    int cur = 0;
    int max_people = 0;

    for (int i = 0; i < 10; i++) {
        std::cin >> disembark >> board;
        cur = cur - disembark + board;

        if (cur > max_people) {
            max_people = cur;
        }
    }

    std::cout << max_people << "\n";

    std::cout << "================================" << std::endl;
}
