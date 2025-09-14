#include "problem_9295.h"
#include <iostream>

void solve_problem_9295() {
    std::cout << "=== 9295번 주사위 문제 해결 ===" << std::endl;

    int t;

    std::cin >> t;

    for (int i = 1; i <= t; i++) {
        int dice_try1, dice_try2;

        std::cin >> dice_try1 >> dice_try2;

        std::cout << "Case " << i << ": " << dice_try1 + dice_try2 << std::endl;
    }

    std::cout << "================================" << std::endl;
}
