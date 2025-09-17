#include "problem_10797.h"
#include <iostream>

void solve_problem_10797() {
    std::cout << "=== 10797번 10부제 문제 해결 ===" << std::endl;

    int n;
    int arr[5];
    int count = 0;

    std::cin >> n;

    for (int & i : arr) {
        std::cin >> i;
        if (i == n) {
            count++;
        }
    }
    std::cout << count << "\n";

    std::cout << "================================" << std::endl;
}
