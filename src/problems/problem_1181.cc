#include "problem_1181.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

void solve_problem_1181() {
    std::cout << "=== 1181번 단어 정렬 문제 해결 ===" << std::endl;

    int n;
    std::cin >> n;

    std::vector<std::string> s(n);
    for (int i = 0; i < n; i++) {
        std::cin >> s[i];
    }

    std::sort(s.begin(), s.end());
    s.erase(std::unique(s.begin(), s.end()), s.end());

    std::sort(s.begin(), s.end(), [](const std::string &a, const std::string &b) {
        if (a.size() == b.size()) {
            return a < b;
        }
        return a.size() < b.size();
    });

    for (auto &str : s) std::cout << str << '\n';

    std::cout << "================================" << std::endl;
}
