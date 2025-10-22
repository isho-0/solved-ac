#include "problem_14914.h"
#include <iostream>

static int gcd(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

void solve_problem_14914() {
    std::cout << "=== 14914번 사과와 바나나 나눠주기 문제 해결 ===" << std::endl;

    int a, b;
    std::cin >> a >> b;

    int g = gcd(a, b);

    for (int i = 1; i <= g; i++) {
        if (a % i == 0 && b % i == 0) {
            std::cout << i << " " << a / i << " " << b / i << "\n";
        }
    }

    std::cout << "================================" << std::endl;
}
