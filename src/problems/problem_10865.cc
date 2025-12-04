#include "problem_10865.h"
#include <vector>
#include <iostream>

void solve_problem_10865() {
    std::cout << "=== 10865번 친구 친구 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, m;
    std::cin >> n >> m;

    std::vector<int> cnt(n + 1, 0);

    int a, b;
    for (int i = 0; i < m; i++) {
        std::cin >> a >> b;
        cnt[a]++;
        cnt[b]++;
    }

    for (int i = 1; i <= n; i++) {
        std::cout << cnt[i] << "\n";
    }

    std::cout << "================================" << std::endl;
}
