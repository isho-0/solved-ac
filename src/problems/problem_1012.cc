#include "problem_1012.h"
#include <iostream>
#include <vector>

static int dx[4] = {1, -1, 0, 0};
static int dy[4] = {0, 0, 1, -1};

static void dfs(std::vector<std::vector<int>>& field, int x, int y, int m, int n) {
    field[y][x] = 0;
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx >= 0 && nx < m && ny >= 0 && ny < n && field[ny][nx] == 1) {
            dfs(field, nx, ny, m, n);
        }
    }
}

void solve_problem_1012() {
    std::cout << "=== 1012번 유기농 배추 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int test_case;
    std::cin >> test_case;
    while (test_case--) {
        int m, n, k;
        std::cin >> m >> n >> k;
        std::vector<std::vector<int>> field(n, std::vector<int> (m, 0));

        for (int i = 0; i < k; i++) {
            int x, y;
            std::cin >> x >> y;
            field[y][x] = 1;
        }

        int count = 0;
        for (int y = 0; y < n; y++) {
            for (int x = 0; x < m; x++) {
                if (field[y][x] == 1) {
                    dfs(field, x, y, m, n);
                    count++;
                }
            }
        }
        std::cout << count << '\n';
    }

    std::cout << "================================" << std::endl;
}
