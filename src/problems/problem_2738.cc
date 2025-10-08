#include "problem_2738.h"
#include <iostream>
#include <vector>

void solve_problem_2738() {
    std::cout << "=== 2738번 행렬 덧셈 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, m;
    if (!(std::cin >> n >> m)) return;

    std::vector<std::vector<int> > a(n, std::vector<int>(m));
    std::vector<std::vector<int> > b(n, std::vector<int>(m));
    std::vector<std::vector<int> > sum(n, std::vector<int>(m));

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j) {
            std::cin >> a[i][j];
            sum[i][j] = a[i][j];
        }

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            std::cin >> b[i][j], sum[i][j] += b[i][j];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (j) std::cout << ' ';
            std::cout << sum[i][j];
        }
        std::cout << '\n';
    }

    std::cout << "================================" << std::endl;
}
