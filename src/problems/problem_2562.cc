#include "problem_2562.h"
#include <iostream>

void solve_problem_2562() {
    std::cout << "=== 2562번 최댓값 문제 해결 ===" << std::endl;

    const int ARRAY_SIZE = 9;
    int n[ARRAY_SIZE];

    for (int i = 0; i < ARRAY_SIZE; i++) {
        std::cin >> n[i];
    }

    int max_value = n[0];
    int max_pos = 1;

    for (int i = 1; i < ARRAY_SIZE; i++) {
        if (n[i] > max_value) {
            max_value = n[i];
            max_pos = i + 1;
        }
    }

    std::cout << max_value << "\n" << max_pos << std::endl;

    std::cout << "================================" << std::endl;
}
