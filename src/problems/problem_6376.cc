#include "problem_6376.h"
#include <iostream>
#include <iomanip>

void solve_problem_6376() {
    std::cout << "=== 6376번 e 계산 문제 해결 ===" << std::endl;

    std::cout << "n e\n";
    std::cout << "- -----------\n";

    double e = 0.0;
    long long fact = 1;

    for (int n = 0; n <= 9; n++) {
        if (n > 0) fact *= n;
        e += 1.0 / fact;

        std::cout << n << " ";
        if (n < 2) {
            std::cout << static_cast<int>(e) << "\n";
        } else if (n == 2) {
            std::cout << e << "\n";
        } else {
            std::cout << std::fixed << std::setprecision(9) << e << "\n";
        }
    }

    std::cout << "================================" << std::endl;
}
