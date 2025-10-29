#include "problem_9286.h"
#include <iostream>

void solve_problem_9286() {
    std::cout << "=== 9286번 Gradabase 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int test_case;
    std::cin >> test_case;

    for (int i = 1; i <= test_case; ++i) {
        int m;
        std::cin >> m;

        std::cout << "Case " << i << ":\n";

        for (int j = 0; j < m; ++j) {
            int grade;
            std::cin >> grade;

            grade += 1;

            if (grade <= 6) {
                std::cout << grade << "\n";
            }
        }
    }

    std::cout << "================================" << std::endl;
}
