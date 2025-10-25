#include "problem_9461.h"
#include <iostream>
#include <vector>

void solve_problem_9461() {
    std::cout << "=== 9461번 파도반 수열 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int test_case;
    std::cin >> test_case;

    std::vector<long long> dp(101, 0);
    dp[1] = dp[2] = dp[3] = 1;

    for (int i = 4; i <= 100; i++) {
        dp[i] = dp[i - 2] + dp[i - 3];
    }

    while (test_case--) {
        int n;
        std::cin >> n;
        std::cout << dp[n] << '\n';
    }

    std::cout << "================================" << std::endl;
}
