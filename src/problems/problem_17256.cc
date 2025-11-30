#include "problem_17256.h"
#include <iostream>

void solve_problem_17256() {
    std::cout << "=== 17256번 달달함이 넘쳐흘러 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int ax, ay, az;
    int cx, cy, cz;
    std::cin >> ax >> ay >> az;
    std::cin >> cx >> cy >> cz;

    int bx = cx - az;
    int by = cy / ay;
    int bz = cz - ax;

    std::cout << bx << " " << by << " " << bz << "\n";

    std::cout << "================================" << std::endl;
}

