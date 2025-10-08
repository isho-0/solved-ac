#include "problem_29863.h"
#include <iostream>

void solve_problem_29863() {
    std::cout << "=== 29863번 Arno's Sleep Schedule 문제 해결 ===" << std::endl;

    int sleep, wake;
    std::cin >> sleep >> wake;

    int hours = 0;
    if (sleep <= 3) {
        hours = wake - sleep;
    } else {
        hours = (wake + 24) - sleep;
    }
    std::cout << hours << "\n";

    std::cout << "================================" << std::endl;
}
