#include "problem_2897.h"
#include <iostream>
#include <vector>

void solve_problem_2897() {
    std::cout << "=== 2897번 몬스터 트럭 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int r, c;
    std::cin >> r >> c;

    std::vector<std::string> g(r);
    for (int i = 0; i < r; i++) {
        std::cin >> g[i];
    }

    int result[5] = {0, 0, 0, 0, 0};
    for (int i = 0; i < r - 1; i++) {
        for (int j = 0; j < c - 1; j++) {
            int cnt_x = 0;
            bool building = false;

            for (int di = 0; di < 2; di++) {
                for (int dj = 0; dj < 2; dj++) {
                    char c = g[i + di][j + dj];
                    if (c == '#') {
                        building = true;
                    } else if (c == 'X') {
                        cnt_x++;
                    }
                }
            }

            if (!building) {
                result[cnt_x]++;
            }
        }
    }
    for (int k = 0; k <= 4; k++) {
        std::cout << result[k] << '\n';
    }

    std::cout << "================================" << std::endl;
}
