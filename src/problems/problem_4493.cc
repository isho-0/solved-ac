#include "problem_4493.h"
#include <iostream>

void solve_problem_4493() {
    std::cout << "=== 4493번 가위 바위 보? 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int test_case;
    std::cin >> test_case;

    while (test_case--) {
        int n;
        std::cin >> n;

        int player1 = 0, player2 = 0;
        for (int i = 0; i < n; i++) {
            char a, b;
            std::cin >> a >> b;

            int result = 0;
            if (a == b) {
                result = 0;
            } else if ((a == 'R' && b == 'S') ||
                (a == 'S' && b == 'P') ||
                (a == 'P' && b == 'R')) {
                result = 1;
            } else {
                result = 2;
            }

            if (result == 1) {
                player1++;
            } else if (result == 2) {
                player2++;
            }
        }

        if (player1 > player2) {
            std::cout << "Player 1\n";
        } else if (player1 < player2) {
            std::cout << "Player 2\n";
        } else {
            std::cout << "TIE\n";
        }
    }

    std::cout << "================================" << std::endl;
}
