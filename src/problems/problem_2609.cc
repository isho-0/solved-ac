#include "problem_2609.h"
#include <iostream>

int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int lcm(int a, int b) {
    return a / gcd(a, b) * b;
}

void solve_problem_2609() {
    std::cout << "=== 2609번 최대공약수와 최소공배수 문제 해결 ===" << std::endl;

    int a, b;
    std::cin >> a >> b;

    std::cout << gcd(a, b) << "\n";
    std::cout << lcm(a, b) << "\n";

    std::cout << "================================" << std::endl;
}