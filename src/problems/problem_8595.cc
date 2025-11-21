#include "problem_8595.h"
#include <iostream>

void solve_problem_8595() {
    std::cout << "=== 8595번 히든 넘버 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    std::string s;
    std::cin >> s;

    long long sum = 0;
    long long cur = 0;
    int digit_count = 0;

    for (char c : s) {
        if (c >= '0' && c <= '9') {
            if (digit_count < 6) {
                cur = cur * 10 + (c - '0');
                digit_count++;
            }
        } else {
            sum += cur;
            cur = 0;
            digit_count = 0;
        }
    }

    sum += cur;

    std::cout << sum << "\n";
    
    std::cout << "================================" << std::endl;
}
