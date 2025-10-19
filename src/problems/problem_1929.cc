#include "problem_1929.h"
#include <iostream>
#include <vector>

void solve_problem_1929() {
    std::cout << "=== 1929번 소수 구하기 문제 해결 ===" << std::endl;

    int m, n;
    std::cin >> m >> n;

    std::vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i * i <= n; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }

    for (int i = m; i <= n; ++i) {
        if (is_prime[i]) {
            std::cout << i << "\n";
        }
    }

    std::cout << "================================" << std::endl;
}
