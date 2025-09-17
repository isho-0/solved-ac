#include "problem_2506.h"
#include <iostream>

void solve_problem_2506() {
    std::cout << "=== 2506번 점수계산 문제 해결 ===" << std::endl;

    int n;
    std::cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    int score = 0;
    int streak = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            streak++;
            score += streak;
        } else {
            streak = 0;
        }
    }
    std::cout << score << "\n";

    std::cout << "================================" << std::endl;
}
