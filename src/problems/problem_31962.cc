#include "problem_31962.h"
#include <iostream>

void solve_problem_31962() {
    std::cout << "=== 31962번 등교 문제 해결 ===" << std::endl;

    int n, x;
    std::cin >> n >> x;

    int s, t;
    int best = -1;
    for (int i = 0; i < n; i++) {
        std::cin >> s >> t;
        if (s + t <= x) {
            if (s > best) best = s;
        }
    }

    std::cout << best << '\n';

    std::cout << "================================" << std::endl;
}