#include "problem_5054.h"
#include <iostream>
#include <algorithm>

void solve_problem_5054() {
    std::cout << "=== 5054번 주차의 신 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    if (!(std::cin >> t)) return;
    while (t--) {
        int n;
        std::cin >> n;
        int x;
        int mn = 1000, mx = -1000;
        for (int i = 0; i < n; ++i) {
            std::cin >> x;
            mn = std::min(mn, x);
            mx = std::max(mx, x);
        }
        std::cout << 2 * (mx - mn) << '\n';
    }

    std::cout << "================================" << std::endl;
}
