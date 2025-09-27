#include "problem_11047.h"
#include <iostream>
#include <vector>

void solve_problem_11047() {
    std::cout << "=== 11047번 동전 0 문제 해결 ===" << std::endl;

    int n, k;
    std::cin >> n >> k;

    std::vector<int> price(n);
    for (int i = 0; i < n; i++) {
        std::cin >> price[i];
    }

    int coin = 0;
    int index = n - 1;
    while (k > 0) {
        coin += k / price[index];
        k %= price[index];
        index--;
    }

    std::cout << coin << "\n";

    std::cout << "================================" << std::endl;
}
