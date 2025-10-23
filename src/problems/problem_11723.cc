#include "problem_11723.h"
#include <iostream>
#include <string>

void solve_problem_11723() {
    std::cout << "=== 11723번 집합 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int m;
    std::cin >> m;
    int s = 0;

    while (m--) {
        std::string op;
        int x;
        std::cin >> op;

        if (op == "add") {
            std::cin >> x;
            s |= (1 << (x - 1));
        } else if (op == "remove") {
            std::cin >> x;
            s &= ~(1 << (x - 1));
        } else if (op == "check") {
            std::cin >> x;
            std::cout << ((s & (1 << (x - 1))) ? 1 : 0) << "\n";
        } else if (op == "toggle") {
            std::cin >> x;
            s ^= (1 << (x - 1));
        } else if (op == "all") {
            s = (1 << 20) - 1;
        } else if (op == "empty") {
            s = 0;
        }
    }

    std::cout << "================================" << std::endl;
}
