#include "problem_17826.h"
#include <iostream>
#include <vector>
#include <algorithm>

void defscore(int i) {
    int rank = i + 1;
    if (rank >= 1 && rank <= 5) {
        std::cout << "A+\n";
    }else if (rank >= 6 && rank <= 15) {
        std::cout << "A0\n";
    }else if (rank >= 16 && rank <= 30) {
        std::cout << "B+\n";
    }else if (rank >= 31 && rank <= 35) {
        std::cout << "B0\n";
    }else if (rank >= 36 && rank <= 45) {
        std::cout << "C+\n";
    }else if (rank >= 46 && rank <= 48) {
        std::cout << "C0\n";
    }else {
        std::cout << "F\n";
    }
}

void solve_problem_17826() {
    std::vector<int> scores(50);

    for (int i = 0; i < 50; i++) {
        std::cin >> scores[i];
    }

    std::sort(scores.begin(), scores.end(), std::greater<int>());

    int hongik_score;
    std::cin >> hongik_score;

    for (int i = 0; i < 50; i++) {
        if (hongik_score == scores[i]) {
            defscore(i);
            break;
        }
    }
}