#include "problem_1977.h"
#include <iostream>

PerfectSquareFinder::PerfectSquareFinder(int m, int n)
    : m(m), n(n), sum(0), min_val(-1) {
}

void PerfectSquareFinder::find() {
    for (int j = 1; j * j <= n; j++) {
        int sq = j * j;
        if (sq >= m && sq <= n) {
            sum += sq;
            if (min_val == -1 || sq < min_val) {
                min_val = sq;
            }
        }
    }
}

void PerfectSquareFinder::print_result() const {
    if (sum == 0) {
        std::cout << -1 << std::endl; // 완전제곱수 없음
    } else {
        std::cout << sum << "\n" << min_val << std::endl;
    }
}

void solve_problem_1977() {
    std::cout << "=== 1977번 완전제곱수 문제 해결 ===" << std::endl;

    int m, n;
    std::cout << "두 정수 M과 N을 입력하세요 (예: 60 100) : ";
    std::cin >> m >> n;

    std::cout << "입력 : M = " << m << ", N = " << n << "\n";
    std::cout << "출력 : " << "\n";

    PerfectSquareFinder finder(m, n);
    finder.find();
    finder.print_result();

    std::cout << "================================" << std::endl;
}
