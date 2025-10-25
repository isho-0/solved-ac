#include "problem_2579.h"
#include <iostream>
#include <vector>
#include <algorithm>

void solve_problem_2579() {
    std::cout << "=== 2579번 계단 오르기 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    std::vector<int> stair(n + 1);
    for (int i = 1; i <= n; i++) {
        std::cin >> stair[i];
    }

    std::vector<int> dp(n + 1, 0);

    dp[1] = stair[1];
    if (n >= 2) {
        dp[2] = stair[1] + stair[2];
    }
    if (n >= 3) {
        dp[3] = std::max(stair[1] + stair[3], stair[2] + stair[3]);
    }

    for (int i = 4; i <= n; i++) {
        dp[i] = std::max(dp[i - 2] + stair[i], dp[i - 3] + stair[i - 1] + stair[i]);
    }

    std::cout << "================================" << std::endl;
}
