#include "problem_1018.h"
#include <iostream>
#include <algorithm>
#include <vector>

void solve_problem_1018() {
    std::cout << "=== 1018번 체스판 다시 칠하기 해결 ===" << std::endl;

    int n, m;
    std::cin >> n >> m;

    std::vector<std::string> board(n);
    for (int i = 0; i < n; i++)
        std::cin >> board[i];

    int result = 64;

    for (int i = 0; i <= n - 8; i++) {
        for (int j = 0; j <= m - 8; j++) {

            int count_w_start = 0;
            int count_b_start = 0;

            for (int x = 0; x < 8; x++) {
                for (int y = 0; y < 8; y++) {
                    char current = board[i + x][j + y];

                    if ((x + y) % 2 == 0) {
                        if (current != 'W') count_w_start++;
                        if (current != 'B') count_b_start++;
                    } else {
                        if (current != 'B') count_w_start++;
                        if (current != 'W') count_b_start++;
                    }
                }
            }
            result = std::min(result, std::min(count_w_start, count_b_start));
        }
    }
    std::cout << result << '\n';

    std::cout << "================================" << std::endl;
}
