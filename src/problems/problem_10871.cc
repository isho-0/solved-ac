#include "problem_10871.h"
#include <iostream>

void solve_problem_10871() {
    std::cout << "=== 10871번 X보다 작은 수 문제 해결 ===" << std::endl;

    int n, x;

    std::cin >> n >> x;
    int a[n];

    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        if (a[i] < x) {
            std::cout << a[i] << " ";
        }
    }
    std::cout << "\n";

    std::cout << "================================" << std::endl;
}