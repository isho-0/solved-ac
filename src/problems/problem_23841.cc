#include "problem_23841.h"
#include <iostream>
#include <string>
#include <vector>

void solve_problem_23841() {
    std::cout << "=== 23841번 데칼코마니 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, m;
    std::cin >> n >> m;

    std::vector<std::string> grid(n);
    for (int i = 0; i < n; i++) {
        std::cin >> grid[i];
    }

    int mid = m / 2;

    for (int r = 0; r < n; r++) {
        std::string result = grid[r];

        for (int c = 0; c < mid; c++) {
            char left = grid[r][c];
            char right = grid[r][m - 1 - c];

            if (left == '.') {
                result[c] = right;
            } else {
                result[c] = left;
            }

            if (right == '.') {
                result[m - 1 - c] = left;
            } else {
                result[m - 1 - c] = right;
            }
        }

        std::cout << result << "\n";
    }

    std::cout << "================================" << std::endl;
}
