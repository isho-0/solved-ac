#include "problem_4388.h"
#include <iostream>

void solve_problem_4388() {
    std::cout << "=== 4388번 받아올림 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    while (true) {
        long long a, b;
        std::cin >> a >> b;

        if (a == 0 && b == 0)
            break;

        int carry = 0;
        int count = 0;

        while (a > 0 || b > 0) {
            int da = a % 10;
            int db = b % 10;

            if (da + db + carry >= 10) {
                count++;
                carry = 1;
            } else {
                carry = 0;
            }

            a /= 10;
            b /= 10;
        }

        std::cout << count << "\n";
    }

    std::cout << "================================" << std::endl;
}
