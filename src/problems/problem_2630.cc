#include "problem_2630.h"
#include <iostream>
#include <vector>

int white_cnt = 0;
int blue_cnt = 0;
std::vector<std::vector<int>> paper;

static bool is_same_color(int x, int y, int size) {
    int color = paper[x][y];
    for (int i = x; i < x + size; ++i) {
        for (int j = y; j < y + size; ++j) {
            if (paper[i][j] != color) return false;
        }
    }
    return true;
}

static void paper_cnt(int x, int y, int size) {
    if (is_same_color(x, y, size)) {
        if (paper[x][y] == 0) white_cnt++;
        else blue_cnt++;
        return;
    }

    int half = size / 2;
    paper_cnt(x, y, half);
    paper_cnt(x, y + half, half);
    paper_cnt(x + half, y, half);
    paper_cnt(x + half, y + half, half);
}

void solve_problem_2630() {
    std::cout << "=== 2630번 색종이 만들기 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    paper.assign(n, std::vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cin >> paper[i][j];
        }
    }

    paper_cnt(0, 0, n);

    std::cout << white_cnt << "\n" << blue_cnt << "\n";

    std::cout << "================================" << std::endl;
}
