#include "problem_2805.h"
#include <iostream>
#include <vector>
#include <algorithm>

void solve_problem_2805() {
    std::cout << "=== 2805번 나무 자르기 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    long long m;
    std::cin >> n >> m;

    std::vector<long long> trees(n);
    for (int i = 0; i < n; i++) {
        std::cin >> trees[i];
    }

    long long low = 0;
    long long high = *max_element(trees.begin(), trees.end());
    long long answer = 0;

    while (low <= high) {
        long long mid = (low + high) / 2;
        long long sum = 0;
        for (long long h : trees) {
            if (h > mid) {
                sum += (h - mid);
            }
        }

        if (sum >= m) {
            answer = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    std::cout << answer << '\n';

    std::cout << "================================" << std::endl;
}


