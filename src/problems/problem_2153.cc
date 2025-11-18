#include "problem_2153.h"
#include <iostream>
#include <string>

static bool isPrime(int n) {
    if (n == 1) {
        return true;
    }
    if (n < 2) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

void solve_problem_2153() {
    std::cout << "=== 2153번 소수 단어 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string word;
    std::cin >> word;

    int sum = 0;
    for (char c: word) {
        if (c >= 'a' && c <= 'z') {
            sum += (c - 'a' + 1);
        } else if (c >= 'A' && c <= 'Z') {
            sum += (c - 'A' + 27);
        }
    }

    if (isPrime(sum)) {
        std::cout << "It is a prime word.\n";
    } else {
        std::cout << "It is not a prime word.\n";
    }

    std::cout << "================================" << std::endl;
}
