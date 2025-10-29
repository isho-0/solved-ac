#include "problem_9375.h"
#include <iostream>
#include <map>
#include <string>

void solve_problem_9375() {
    std::cout << "=== 9375번 패션왕 신해빈 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int test_case;
    std::cin >> test_case;

    while (test_case--) {
        int n;
        std::cin >> n;

        std::map<std::string, int> clothes;
        for (int i = 0; i < n; i++) {
            std::string name, type;
            std::cin >> name >> type;

            clothes[type]++;
        }

        int result = 1;
        for (auto &c: clothes) {
            result *= (c.second + 1);
        }

        std::cout << result - 1 << "\n";
    }

    std::cout << "================================" << std::endl;
}
