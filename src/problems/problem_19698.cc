#include "problem_19698.h"
#include <iostream>

void solve_problem_19698() {
    std::cout << "=== 19698번 헛간 청약 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, w, h, l;
    if (!(std::cin >> n >> w >> h >> l)) {
        return;
    };

    int fitW = w / l;
    int fitH = h / l;
    int capacity = fitW * fitH;

    int answer = (n < capacity) ? n : capacity;
    std::cout << answer << '\n';

    std::cout << "================================" << std::endl;
}
