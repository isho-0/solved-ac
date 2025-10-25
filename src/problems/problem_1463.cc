#include "problem_1463.h"
#include <iostream>
#include <vector>
#include <algorithm>

void solve_problem_1463() {
    std::cout << "=== 1463번 1로 만들기 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int x;
    std::cin >> x;

    std::vector<int> dp(x + 1, 0);

    for (int i = 2; i <= x; i++) {
        dp[i] = dp[i - 1] + 1;
        if (i % 2 == 0)
            dp[i] = std::min(dp[i], dp[i / 2] + 1);
        if (i % 3 == 0)
            dp[i] = std::min(dp[i], dp[i / 3] + 1);
    }
    std::cout << dp[x] << "\n";

    std::cout << "================================" << std::endl;
}
