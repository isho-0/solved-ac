#include "problem_1292.h"
#include <iostream>

void solve_problem_1292() {
    std::cout << "=== 1292번 쉽게 푸는 문제 문제 해결 ===" << std::endl;

    int a, b;
    std::cin >> a >> b;

    int sum = 0;
    int arr[1000];

    int idx = 0;
    for (int num = 1; idx < 1000; num++) {
        for (int count = 0; count < num && idx < 1000; count++) {
            arr[idx++] = num;
        }
    }

    for (int i = a - 1; i <= b - 1; i++) {
        sum += arr[i];
    }

    std::cout << sum << "\n";

    std::cout << "================================" << std::endl;
}
