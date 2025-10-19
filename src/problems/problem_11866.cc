#include "problem_11866.h"
#include <iostream>
#include <vector>
#include <queue>

void solve_problem_11866() {
    std::cout << "=== 11866번 요세푸스 문제 0 문제 해결 ===" << std::endl;

    int n, k;
    std::cin >> n >> k;

    std::queue<int> que;
    std::vector<int> result;
    for (int i = 1; i <= n; i++) {
        que.push(i);
    }

    while (!que.empty()) {
        for (int i = 0; i < k - 1; i++) {
            int front = que.front();
            que.pop();
            que.push(front);
        }

        result.push_back(que.front());
        que.pop();
    }

    std::cout << "<";
    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i];
        if (i != result.size() - 1) {
            std::cout << ", ";
        }
    }

    std::cout << ">\n";

    std::cout << "================================" << std::endl;
}
