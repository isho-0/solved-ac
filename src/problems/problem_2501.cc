#include "problem_2501.h"
#include <iostream>

void solve_problem_2501() {
    std::cout << "=== 2501번 약수 구하기 문제 해결 ===" << std::endl;

    int N, K;
    std::cin >> N >> K;

    int count = 0;
    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            count++;
            if (count == K) {
                std::cout << i << "\n";
                return;
            }
        }
    }

    std::cout << 0 << "\n";

    std::cout << "================================" << std::endl;
}