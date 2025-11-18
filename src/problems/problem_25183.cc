#include "problem_25183.h"
#include <iostream>
#include <string>
#include <cmath>

void solve_problem_25183() {
    std::cout << "=== 25183번 인생은 한 방 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    std::string lotto;
    std::cin >> lotto;

    int current = 1;
    int best = 1;

    for (int i = 1; i < n; i++) {
        if (std::abs(lotto[i] - lotto[i - 1]) == 1) {
            current++;
            if (current > best) best = current;
        } else {
            current = 1;
        }
    }

    std::cout << (best >= 5 ? "YES" : "NO") << '\n';

    std::cout << "================================" << std::endl;
}
