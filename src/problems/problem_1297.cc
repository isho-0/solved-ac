#include "problem_1297.h"
#include <iostream>
#include <cmath>

void solve_problem_1297() {
    std::cout << "=== 1297번 TV 크기 문제 해결 ===" << std::endl;

    double d, h, w;
    std::cin >> d >> h >> w;

    double x = d / sqrt(h * h + w * w);
    std::cout << (int)(h * x) << " " << (int)(w * x) << "\n";

    std::cout << "================================" << std::endl;
}