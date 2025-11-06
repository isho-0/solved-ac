#include "problem_2712.h"
#include <iostream>
#include <iomanip>
#include <string>

void solve_problem_2712() {
    std::cout << "=== 2712번 미국 스타일 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int T;
    std::cin >> T;

    for (int i = 0; i < T; i++) {
        double value;
        std::string unit;
        std::cin >> value >> unit;

        double result = 0.0;
        std::string target_unit;

        if (unit == "kg") {
            result = value * 2.2046;
            target_unit = "lb";
        } else if (unit == "lb") {
            result = value * 0.4536;
            target_unit = "kg";
        } else if (unit == "l") {
            result = value * 0.2642;
            target_unit = "g";
        } else if (unit == "g") {
            result = value * 3.7854;
            target_unit = "l";
        }

        std::cout << std::fixed << std::setprecision(4)
                  << result << ' ' << target_unit << '\n';
    }

    std::cout << "================================" << std::endl;
}
