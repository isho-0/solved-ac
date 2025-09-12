#include "problem_5522.h"
#include <iostream>

void solve_problem_5522() {
    std::cout << "=== 5522번 카드 게임 문제 해결 ===" << std::endl;

    int n;
    int sum = 0;

    for (int i = 1; i <= 5; i++) {
        std::cin >> n;
        sum += n;
    }
    std::cout << sum << std::endl;

    std::cout << "================================" << std::endl;
}
