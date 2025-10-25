#include "problem_1654.h"
#include <iostream>
#include <vector>
#include <algorithm>

void solve_problem_1654() {
    std::cout << "=== 1654번 랜선 자르기 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int k, n;
    std::cin >> k >> n;

    std::vector<long long> lan(k);
    long long high = 0;
    for (int i = 0; i < k; i++) {
        std::cin >> lan[i];
        high = std::max(high, lan[i]);
    }

    long long low = 1;
    long long ans = 0;
    while (low <= high) {
        long long mid = (low + high) / 2;
        long long count = 0;

        for (int i = 0; i < k; i++) {
            count += lan[i] / mid;
        }

        if (count >= n) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    std::cout << ans << "\n";

    std::cout << "================================" << std::endl;
}
