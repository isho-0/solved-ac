#include "problem_1009.h"
#include <iostream>

void solve_problem_1009() {
    std::cout << "=== 1009번 분산처리 문제 해결 ===" << std::endl;

    int t;
    std::cin >> t;

    while (t--) {
        int a, b;
        std::cin >> a >> b;

        a %= 10;

        if (a == 0) {
            std::cout << 10 << "\n";
            continue;
        }

        int result = 1;
        for (int i = 0; i < b; i++) {
            result = (result * a) % 10;
        }

        if (result == 0)
            result = 10;

        std::cout << result << "\n";
    }

    std::cout << "================================" << std::endl;
}
