#include "problem_1764.h"
#include <iostream>
#include <set>
#include <string>
#include <vector>
#include <algorithm>

void solve_problem_1764() {
    std::cout << "=== 1764번 듣보잡 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, m;
    std::cin >> n >> m;

    std::set<std::string> unheard;
    std::vector<std::string> result;

    for (int i = 0; i < n; i++) {
        std::string name;
        std::cin >> name;
        unheard.insert(name);
    }

    for (int i = 0; i < m; i++) {
        std::string name;
        std::cin >> name;
        if (unheard.find(name) != unheard.end()) {
            result.push_back(name);
        }
    }

    std::sort(result.begin(), result.end());

    std::cout << result.size() << "\n";
    for (const auto& name : result) {
        std::cout << name << "\n";
    }

    std::cout << "================================" << std::endl;
}
