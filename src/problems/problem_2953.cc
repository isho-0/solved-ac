#include "problem_2953.h"
#include <iostream>

void solve_problem_2953() {
    std::cout << "=== 2953번 나는 요리사다 문제 해결 ===" << std::endl;

    int cook[5][4];
    int winner = 0;
    int winner_score = 0;

    for (int i = 0; i < 5; i++) {
        int sum = 0;

        for (int j = 0; j < 4; j++) {
            std::cin >> cook[i][j];
            sum += cook[i][j];
        }
        if (winner_score < sum) {
            winner_score = sum;
            winner = i + 1;
        }
    }
    std::cout << winner << " " << winner_score << "\n";

    std::cout << "================================" << std::endl;
}
