#include "problem_5523.h"
#include <iostream>

void solve_problem_5523() {
    std::cout << "=== 5523번 경기 결과 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    int a, b;
    int a_win = 0, b_win = 0;
    for (int i = 0; i < n; i++) {
        std::cin >> a >> b;
        if (a > b) {
            a_win++;
        } else if (b > a) {
            b_win++;
        }
    }
    std::cout << a_win << " " << b_win << '\n';

    std::cout << "================================" << std::endl;
}
