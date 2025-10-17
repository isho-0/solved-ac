#include "problem_16693.h"
#include <iostream>
#include <cmath>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

void solve_problem_16693() {
    std::cout << "=== 16693번 Pizza Deal 문제 해결 ===" << std::endl;

    double A1, P1, R1, P2;
    std::cin >> A1 >> P1;
    std::cin >> R1 >> P2;

    double slice = A1 / P1;
    double whole = (M_PI * R1 * R1) / P2;

    if (whole > slice) {
        std::cout << "Whole pizza";
    } else {
        std::cout << "Slice of pizza";
    }

    std::cout << "================================" << std::endl;
}
