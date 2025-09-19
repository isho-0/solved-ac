#include "problem_10807.h"
#include <iostream>

void solve_problem_10807() {
    std::cout << "=== 10807번 개수 세기 문제 해결 ===" << std::endl;

    int t;
    std::cin >> t;

    int arr[t];
    int v;
    int count = 0;

    for (int i = 0; i < t; i++) {
        std::cin >> arr[i];
    }
    std::cin >> v;

    for (int i = 0; i < t; i++) {
        if (v == arr[i]) {
            count++;
        }
    }
    std::cout << count << "\n";

    std::cout << "================================" << std::endl;
}