#include "problem_1546.h"
#include <iostream>

void solve_problem_1546() {
    std::cout << "=== 1546번 평균 문제 해결 ===" << std::endl;

    int n;
    std::cin >> n;

    int scores[1000];
    int max_score = 0;
    double sum = 0.0;

    for (int i = 0; i < n; i++) {
        std::cin >> scores[i];
        if (scores[i] > max_score) {
            max_score = scores[i];
        }
    }

    for (int i = 0; i < n; i++) {
        sum += (double) scores[i] / max_score * 100;
    }

    std::cout << sum / n << "\n";

    std::cout << "================================" << std::endl;
}
