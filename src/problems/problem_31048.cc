#include "problem_31048.h"
#include <iostream>

void solve_problem_31048() {
    std::cout << "=== 31048번 Last Factorial Digit 문제 해결 ===" << std::endl;

    int test_case;
    std::cin >> test_case;

    while (test_case--) {
        int n;
        std::cin >> n;

        int fact = 1;
        for (int i = 1; i <= n; i++) {
            fact *= i;
            fact %= 10;
        }

        std::cout << fact << "\n";
    }

    std::cout << "================================" << std::endl;
}
