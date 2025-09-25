#include "problem_28444.h"
#include <iostream>

void solve_problem_28444() {
    std::cout << "=== 28444번 생일 문제 해결 ===" << std::endl;

    int hiarc[100];

    for (int i = 0; i < 5; i++) {
        std::cin >> hiarc[i];
    }
    int first_arc = hiarc[0] * hiarc[1];
    int second_arc = hiarc[2] * hiarc[3] * hiarc[4];

    std::cout << first_arc - second_arc << "\n";

    std::cout << "================================" << std::endl;
}