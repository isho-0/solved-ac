#include "problem_6322.h"
#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

void solve_problem_6322() {
    std::cout << "=== 6322번 직각 삼각형의 두 변 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int cnt = 1;
    while (true) {
        std::vector<int> abc(3);
        for (int i = 0; i < 3; i++) {
            std::cin >> abc[i];
        }

        if (abc[0] == 0 && abc[1] == 0 && abc[2] == 0) {
            break;
        }

        std::cout << "Triangle #" << cnt++ << "\n";
        if (abc[0] == -1) {
            if (abc[2] <= abc[1]) {
                std::cout << "Impossible.\n\n";
            } else {
                double result = sqrt(abc[2] * abc[2] - abc[1] * abc[1]);
                std::cout << "a = " << std::fixed << std::setprecision(3) << result << "\n\n";
            }
        } else if (abc[1] == -1) {
            if (abc[2] <= abc[0]) {
                std::cout << "Impossible.\n\n";
            } else {
                double result = sqrt(abc[2] * abc[2] - abc[0] * abc[0]);
                std::cout << "b = " << std::fixed << std::setprecision(3) << result << "\n\n";
            }
        } else if (abc[2] == -1) {
            double result = sqrt(abc[0] * abc[0] + abc[1] * abc[1]);
            std::cout << "c = " << std::fixed << std::setprecision(3) << result << "\n\n";
        }
    }

    std::cout << "================================" << std::endl;
}

