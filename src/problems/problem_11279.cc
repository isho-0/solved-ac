#include "problem_11279.h"
#include <iostream>
#include <queue>

void solve_problem_11279() {
    std::cout << "=== 11279번 최대 힙 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    std::priority_queue<int> pq;

    for (int i = 0; i < n; i++) {
        int x;
        std::cin >> x;
        if (x == 0) {
            if (pq.empty()) {
                std::cout << 0 << '\n';
            } else {
                std::cout << pq.top() << '\n';
                pq.pop();
            }
        } else {
            pq.push(x);
        }
    }

    std::cout << "================================" << std::endl;
}
