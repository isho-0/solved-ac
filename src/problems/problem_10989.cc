#include "problem_10989.h"
#include <iostream>

void solve_problem_10989() {
    std::cout << "=== 10989번 수 정렬하기 3 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    int count[10001] = {0};

    for (int i = 0; i < n; i++) {
        int num;
        std::cin >> num;
        count[num]++;
    }

    for (int i = 1; i <= 10000; i++) {
        while (count[i]--) {
            std::cout << i << '\n';
        }
    }

    std::cout << "================================" << std::endl;
}
