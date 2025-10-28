#include "problem_10866.h"
#include <iostream>
#include <deque>
#include <string>

void solve_problem_10866() {
    std::cout << "=== 10866번 덱 문제 해결 ===" << std::endl;
    
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    std::cin >> n;

    std::deque<int> dq;
    std::string cmd;

    while (n--) {
        std::cin >> cmd;
        if (cmd == "push_front") {
            int x; std::cin >> x;
            dq.push_front(x);
        }
        else if (cmd == "push_back") {
            int x; std::cin >> x;
            dq.push_back(x);
        }
        else if (cmd == "pop_front") {
            if (dq.empty()) std::cout << -1 << '\n';
            else {
                std::cout << dq.front() << '\n';
                dq.pop_front();
            }
        }
        else if (cmd == "pop_back") {
            if (dq.empty()) std::cout << -1 << '\n';
            else {
                std::cout << dq.back() << '\n';
                dq.pop_back();
            }
        }
        else if (cmd == "size") {
            std::cout << dq.size() << '\n';
        }
        else if (cmd == "empty") {
            std::cout << dq.empty() << '\n';
        }
        else if (cmd == "front") {
            if (dq.empty()) std::cout << -1 << '\n';
            else std::cout << dq.front() << '\n';
        }
        else if (cmd == "back") {
            if (dq.empty()) std::cout << -1 << '\n';
            else std::cout << dq.back() << '\n';
        }
    }

    std::cout << "================================" << std::endl;
}