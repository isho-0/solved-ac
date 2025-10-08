#include "problem_11650.h"
#include <iostream>
#include <vector>
#include <algorithm>

static std::vector<int> combine(const std::vector<int> &v1, const std::vector<int> &v2) {
    std::vector<int> result = v1;
    result.insert(result.end(), v2.begin(), v2.end());
    return result;
}

void solve_problem_11650() {
    std::cout << "=== 11650번 좌표 정렬하기 문제 해결 ===" << std::endl;

    int n;
    std::cin >> n;

    std::vector<std::pair<int, int> > points(n);
    for (int i = 0; i < n; i++) {
        std::cin >> points[i].first >> points[i].second;
    }

    std::sort(points.begin(), points.end());

    for (auto &p: points) {
        std::cout << p.first << " " << p.second << "\n";
    }

    std::cout << "================================" << std::endl;
}
