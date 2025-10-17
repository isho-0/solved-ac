#include "problem_2164.h"
#include <iostream>
#include <queue>

void solve_problem_2164() {
    std::cout << "=== 2164번 카드2 문제 해결 ===" << std::endl;

    int n;
    std::cin >> n;

    std::queue<int> card;
    for (int i = 1; i <= n; i++) {
        card.push(i);
    }

    while (card.size() > 1) {
        card.pop();
        card.push(card.front());
        card.pop();
    }
    std::cout << card.front() << "\n";

    std::cout << "================================" << std::endl;
}
