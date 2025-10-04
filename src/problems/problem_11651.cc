#include "problem_11651.h"
#include <iostream>
#include <vector>
#include <algorithm>

void solve_problem_11651() {
    std::cout << "=== 11651번 좌표 정렬하기 2 문제 해결 ===" << std::endl;

    int N;
    std::cin >> N;

    std::vector<std::pair<int, int>> points(N);

    for (int i = 0; i < N; i++) {
        std::cin >> points[i].first >> points[i].second;
    }

    std::sort(points.begin(), points.end(), [](const std::pair<int, int>& a, const std::pair<int, int>& b) {
        if (a.second == b.second)
            return a.first < b.first;
        return a.second < b.second;
    });

    for (const auto& p : points) {
        std::cout << p.first << " " << p.second << "\n";
    }

    std::cout << "================================" << std::endl;
}
