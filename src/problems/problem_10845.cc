#include "problem_10845.h"
#include <iostream>
#include <string>
#include <queue>

void solve_problem_10845() {
    std::cout << "=== 10845번 큐 문제 해결 ===" << std::endl;

    int n;
    std::cin >> n;

    std::queue<int> que;
    std::string command;
    while (n--) {
        std::cin >> command;

        if (command == "push") {
            int x;
            std::cin >> x;
            que.push(x);
        } else if (command == "pop") {
            if (que.empty()) {
                std::cout << -1 << "\n";
            } else {
                std::cout << que.front() << "\n";
                que.pop();
            }
        } else if (command == "size") {
            std::cout << que.size() << "\n";
        } else if (command == "empty") {
            std::cout << (que.empty() ? 1 : 0) << "\n";
        } else if (command == "front") {
            if (que.empty()) {
                std::cout << -1 << "\n";
            } else {
                std::cout << que.front() << "\n";
            }
        } else if (command == "back") {
            if (que.empty()) {
                std::cout << -1 << "\n";
            } else {
                std::cout << que.back() << "\n";
            }
        }
    }

    std::cout << "================================" << std::endl;
}
