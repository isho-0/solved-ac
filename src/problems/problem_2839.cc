#include "problem_2839.h"
#include <iostream>

void solve_problem_2839() {
    std::cout << "=== 2839번 설탕 배달 문제 해결 ===" << std::endl;

    int n;
    std::cin >> n;

    int count = 0;
    while (n >= 0) {
        if (n % 5 == 0) {
            count += n / 5;
            std::cout << count << "\n";
            return;
        }
        n -= 3;
        count++;
    }
    std::cout << -1 << "\n";

    std::cout << "================================" << std::endl;
}
