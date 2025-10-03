#include "problem_11170.h"
#include <iostream>
#include <string>

void solve_problem_11170() {
    std::cout << "=== 11170번 0의 개수 문제 해결 ===" << std::endl;

    int test_case;
    std::cin >> test_case;

    for (int t = 0; t < test_case; t++) {
        int n, m;
        std::cin >> n >> m;

        int count = 0;
        for (int i = n; i <= m; i++) {
            std::string num = std::to_string(i);
            for (char c : num) {
                if (c == '0') count++;
            }
        }

        std::cout << count << "\n";
    }

    std::cout << "================================" << std::endl;
}
