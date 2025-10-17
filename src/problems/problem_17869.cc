#include "problem_17869.h"
#include <iostream>

void solve_problem_17869() {
    std::cout << "=== 17869번 Simple Collatz Sequence 문제 해결 ===" << std::endl;

    long long a;
    std::cin >> a;

    long long count = 0;
    while (a > 1) {
        if (a % 2 == 0) {
            a /= 2;
            count++;
        } else {
            a = (a + 1) / 2;
            count += 2;
        }
    }

    std::cout << count << "\n";

    std::cout << "================================" << std::endl;
}
