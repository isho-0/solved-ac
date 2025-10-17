#include "problem_3058.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

void solve_problem_3058() {
    std::cout << "=== 3058번 짝수를 찾아라 문제 해결 ===" << std::endl;

    int test_case;
    std::cin >> test_case;

    while (test_case--) {
        int sum = 0;
        int min_val = INT_MAX;

        for (int j = 0; j < 7; j++) {
            int num;
            std::cin >> num;
            if (num % 2 == 0) {
                sum += num;
                if (num < min_val) {
                    min_val = num;
                }
            }
        }
        std::cout << sum << " " << min_val << "\n";
    }

    std::cout << "================================" << std::endl;
}
