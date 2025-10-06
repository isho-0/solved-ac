#include "problem_15829.h"
#include <iostream>
#include <string>

void solve_problem_15829() {
    std::cout << "=== 15829번 Hashing 문제 해결 ===" << std::endl;

    int l;
    std::string s;
    std::cin >> l >> s;

    const long long m = 1234567891;
    const long long r = 31;

    long long hash_v = 0;
    long long power = 1;

    for (int i = 0; i < l; i++) {
        int value = s[i] - 'a' + 1;
        hash_v = (hash_v + (value * power) % m) % m;
        power = (power * r) % m;
    }
    std::cout << hash_v << "\n";

    std::cout << "================================" << std::endl;
}
