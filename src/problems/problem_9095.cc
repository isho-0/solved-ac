#include "problem_9095.h"
#include <iostream>

void solve_problem_9095() {
    std::cout << "=== 9095번 1, 2, 3 더하기 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int test_case;
    std::cin >> test_case;

    int dp[12] = {0};
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;

    for (int i = 4; i <= 11; i++) {
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
    }

    while (test_case--) {
        int n;
        std::cin >> n;
        std::cout << dp[n] << "\n";
    }

    std::cout << "================================" << std::endl;
}
