#include "problem_10953.h"
#include <iostream>

void solve_problem_10953() {
    std::cout << "=== 10953번 A + B - 6 문제 해결 ===" << std::endl;

    int t;
    std::cin >> t;

    while (t--) {

        int a, b;

        char comma;
        std::cin >> a >> comma >> b;
        std::cout << a + b << "\n";
    }

    std::cout << "================================" << std::endl;
}