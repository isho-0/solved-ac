#include "problem_2702.h"
#include <iostream>

static int gcd(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

static int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

void solve_problem_2702() {
    std::cout << "=== 2702번 초6 수학 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int T;
    std::cin >> T;

    while (T--) {
        int a, b;
        std::cin >> a >> b;

        std::cout << lcm(a, b) << " " << gcd(a, b) << '\n';
    }

    std::cout << "================================" << std::endl;
}