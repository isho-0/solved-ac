#include "problem_1978.h"
#include <iostream>

bool is_prime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void solve_problem_1978() {
    std::cout << "=== 1978번 소수 찾기 문제 해결 ===" << std::endl;

    int n, num;
    int prime_count = 0;

    std::cin >> n;

    for (int i = 1; i <= n; i++) {
        std::cin >> num;
        if (is_prime(num)) {
            prime_count++;
        }
    }
    std::cout << prime_count << "\n";

    std::cout << "================================" << std::endl;
}
