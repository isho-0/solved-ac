#include "problem_9325.h"
#include <iostream>

void solve_problem_9325() {
    std::cout << "=== 9325번 얼마? 문제 해결 ===" << std::endl;

    int test_case;

    std::cin >> test_case;

    while (test_case--) {
        int total_price = 0;

        int s;
        std::cin >> s;
        total_price += s;

        int n;
        std::cin >> n;
        for (int i = 1; i <= n; i++) {
            int q, p;
            std::cin >> q >> p;

            total_price += (q * p);
        }
        std::cout << total_price << std::endl;
    }

    std::cout << "================================" << std::endl;
}
