#include "problem_9498.h"
#include <iostream>

void solve_problem_9498() {
    std::cout << "=== 9498번 시험 성적 문제 해결 ===" << std::endl;

    int score;
    std::cin >> score;

    if (score >= 90 && score <= 100) {
        std::cout << "A\n";
    } else if (score >= 80 && score <= 89) {
        std::cout << "B\n";
    } else if (score >= 70 && score <= 79) {
        std::cout << "C\n";
    } else if (score >= 60 && score <= 69) {
        std::cout << "D\n";
    } else {
        std::cout << "F\n";
    }

    std::cout << "================================" << std::endl;
}
