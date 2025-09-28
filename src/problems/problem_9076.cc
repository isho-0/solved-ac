#include "problem_9076.h"
#include <iostream>
#include <vector>
#include <algorithm>

void solve_problem_9076() {
    std::cout << "=== 9076번 점수 집계 문제 해결 ===" << std::endl;

    int test_case = 0;
    std::cin >> test_case;

    while (test_case--) {
        std::vector<int> scores(5);
        for (int i = 0; i < 5; i++) {
            std::cin >> scores[i];
        }

        sort(scores.begin(), scores.end());

        if (scores[3] - scores[1] >= 4) {
            std::cout << "KIN\n";
        } else {
            std::cout << scores[1] + scores[2] + scores[3] << "\n";
        }
    }

    std::cout << "================================" << std::endl;
}
