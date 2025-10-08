#include "problem_2231.h"
#include <iostream>

void solve_problem_2231() {
    std::cout << "=== 2231번 분해합 문제 해결 ===" << std::endl;

    int n;
    std::cin >> n;

    int result = 0;
    for (int i = 1; i < n; i++) {
        int sum = i;
        int tmp = i;

        while (tmp > 0) {
            sum += tmp % 10;
            tmp /= 10;
        }

        if (sum == n) {
            result = i;
            break;
        }
    }

    std::cout << result << "\n";

    std::cout << "================================" << std::endl;
}
