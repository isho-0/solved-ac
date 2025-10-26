#include "problem_11659.h"
#include <iostream>
#include <vector>

void solve_problem_11659() {
    std::cout << "=== 11659번 구간 합 구하기 4 문제 해결 ===" << std::endl;

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, m;
    std::cin >> n >> m;

    std::vector<int> arr(n);
    std::vector<int> prefix(n + 1, 0);

    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
        prefix[i + 1] = prefix[i] + arr[i];
    }

    for (int i = 0; i < m; i++) {
        int a, b;
        std::cin >> a >> b;

        std::cout << prefix[b] - prefix[a - 1] << "\n";
    }

    std::cout << "================================" << std::endl;
}