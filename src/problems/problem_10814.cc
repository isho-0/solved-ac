#include "problem_10814.h"
#include <iostream>
#include <vector>
#include <algorithm>

void solve_problem_10814() {
    std::cout << "=== 10814번 나이순 정렬 문제 해결 ===" << std::endl;

    int test_case;
    std::cin >> test_case;

    std::vector<std::pair<int, std::string>> user(test_case);
    for (int i = 0; i < test_case; i++) {
        std::cin >> user[i].first >> user[i].second;
    }

    std::stable_sort(user.begin(), user.end(),
        [](const auto& a, const auto& b) {
            return a.first < b.first;
        });

    for (const auto& u : user) {
        std::cout << u.first << " " << u.second << "\n";
    }

    std::cout << "================================" << std::endl;
}
