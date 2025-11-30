#include "problem_25551.h"
#include <iostream>
#include <algorithm>

void solve_problem_25551() {
    std::cout << "=== 25551번 멋쟁이 포닉스 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    long long mw, mb;
    long long tw, tb;
    long long pw, pb;

    std::cin >> mw >> mb;
    std::cin >> tw >> tb;
    std::cin >> pw >> pb;

    long long x = std::min({tw, mb, pb});
    long long y = std::min({tb, mw, pw});

    if (x > y + 1) {
        x = y + 1;
    }
    if (y > x + 1) {
        y = x + 1;
    }

    std::cout << (x + y) << "\n";

    std::cout << "================================" << std::endl;
}
