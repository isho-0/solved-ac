#include "problem_7510.h"
#include <iostream>
#include <vector>
#include <algorithm>

void solve_problem_7510() {
    std::cout << "=== 7510번 고급 수학 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    std::vector<int> v(3);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            std::cin >> v[j];
        }
        std::sort(v.begin(), v.end());
        std::cout << "Scenario #" << i + 1 << ":\n";
        if (v[0] * v[0] + v[1] * v[1] == v[2] * v[2]) {
            std::cout << "yes\n";
        } else {
            std::cout << "no\n";
        }
        std::cout << '\n';
    }
    
    std::cout << "================================" << std::endl;
}
