#include "problem_26340.h"
#include <iostream>
#include <algorithm>

void solve_problem_26340() {
    std::cout << "=== 26340 Fold the Paper Nicely 문제 해결 ===" << std::endl;

    int n;
    std::cin >> n;

    while (n--) {
        int a, b, folds;
        std::cin >> a >> b >> folds;

        std::cout << "Data set: " << a << " " << b << " " << folds << "\n";

        for (int i = 0; i < folds; i++) {
            if (a >= b) {
                a /= 2;
            } else {
                b /= 2;
            }
        }

        if (a < b) std::swap(a, b);

        std::cout << a << " " << b << "\n\n";
    }

    std::cout << "================================" << std::endl;
}
