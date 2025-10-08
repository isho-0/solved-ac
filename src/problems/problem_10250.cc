#include "problem_10250.h"
#include <iostream>

void solve_problem_10250() {
    std::cout << "=== 10250번 ACM 호텔 문제 해결 ===" << std::endl;

    int test_case;
    std::cin >> test_case;

    while (test_case--) {
        int H, W, N;
        std::cin >> H >> W >> N;

        int floor = (N - 1) % H + 1;
        int room = (N - 1) / H + 1;

        std::cout << floor * 100 + room << "\n";
    }

    std::cout << "================================" << std::endl;
}
