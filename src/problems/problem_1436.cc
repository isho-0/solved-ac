#include "problem_1436.h"
#include <iostream>
#include <string>

void solve_problem_1436() {
    std::cout << "=== 1436번 영화감독 숌 문제 해결 ===" << std::endl;

    int n;
    std::cin >> n;

    int count = 0;
    int num = 666;
    while (true) {
        if (std::to_string(num).find("666") != std::string::npos) {
            count++;
            if (count == n) {
                std::cout << num << "\n";
                break;
            }
        }
        num++;
    }

    std::cout << "================================" << std::endl;
}
