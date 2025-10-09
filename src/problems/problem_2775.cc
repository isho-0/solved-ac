#include "problem_2775.h"
#include <iostream>

void solve_problem_2775() {
    std::cout << "=== 2775번 부녀회장이 될테야 문제 해결 ===" << std::endl;

    int test_case;
    std::cin >> test_case;

    int people[15][15] = {0};

    for (int i = 1; i <= 14; i++) {
        people[0][i] = i;
    }

    for (int k = 1; k <= 14; k++) {
        for (int n = 1; n <= 14; n++) {
            people[k][n] = people[k][n - 1] + people[k - 1][n];
        }
    }

    while (test_case--) {
        int k, n;
        std::cin >> k >> n;
        std::cout << people[k][n] << "\n";
    }

    std::cout << "================================" << std::endl;
}
