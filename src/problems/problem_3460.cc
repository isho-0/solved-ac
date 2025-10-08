#include "problem_3460.h"
#include <iostream>

void solve_problem_3460() {
    std::cout << "=== 3460번 이진수 문제 해결 ===" << std::endl;

    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;
        int position = 0;

        while (n > 0) {
            if (n & 1) {
                std::cout << position << " ";
            }
            n >>= 1;
            position++;
        }
        std::cout << "\n";
    }

    std::cout << "================================" << std::endl;
}
