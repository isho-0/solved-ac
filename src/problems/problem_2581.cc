#include "problem_2581.h"
#include <iostream>

bool is_prime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void solve_problem_2581() {
    int m, n;
    std::cin >> m >> n;

    int sum = 0;
    int min_prime = -1;

    for (int i = m; i <= n; i++) {
        if (is_prime(i)) {
            sum += i;
            if (min_prime == -1) min_prime = i;
        }
    }

    if (min_prime == -1) {
        std::cout << -1 << "\n";
    } else {
        std::cout << sum << "\n" << min_prime << "\n";
    }
}