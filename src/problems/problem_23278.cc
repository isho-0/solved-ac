#include "problem_23278.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

void solve_problem_23278() {
    std::cout << "=== 23278번 영화 평가 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, l, h;
    std::cin >> n >> l >> h;

    std::vector<int> scores(n);
    for (int i = 0; i < n; i++) {
        std::cin >> scores[i];
    }

    std::sort(scores.begin(), scores.end());

    double sum = 0.0;
    for (int i = l; i < n - h; i++) {
        sum += scores[i];
    }

    double avg = sum / (n - l - h);
    std::cout << std::fixed << std::setprecision(15) << avg << '\n';

    std::cout << "================================" << std::endl;
}
