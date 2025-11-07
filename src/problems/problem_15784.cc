#include "problem_15784.h"
#include <iostream>
#include <vector>

void solve_problem_15784() {
    std::cout << "=== 15784번 질투진서 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, a, b;
    std::cin >> n >> a >> b;

    a--;
    b--;

    std::vector<std::vector<int>> chair(n, std::vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cin >> chair[i][j];
        }
    }

    bool angry = false;
    for (int j = 0; j < n; j++) {
        if (chair[a][j] > chair[a][b]) {
            angry = true;
            break;
        }
    }
    for (int i = 0; i < n; i++) {
        if (chair[i][b] > chair[a][b]) {
            angry = true;
            break;
        }
    }

    std::cout << (angry ? "ANGRY\n" : "HAPPY\n");

    std::cout << "================================" << std::endl;
}
