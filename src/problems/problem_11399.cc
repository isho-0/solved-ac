#include "problem_11399.h"
#include <iostream>
#include <vector>
#include <algorithm>

void solve_problem_11399() {
    std::cout << "=== 11399번 ATM 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    std::vector<int> v(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }

    std::sort(v.begin(), v.end());

    int sum = 0;
    int total = 0;
    for (int i = 0; i < n; i++) {
        sum += v[i];
        total += sum;
    }
    std::cout << total << "\n";

    std::cout << "================================" << std::endl;
}
