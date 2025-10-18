#include "problem_9012.h"
#include <iostream>
#include <stack>
#include <string>

void solve_problem_9012() {
    std::cout << "=== 9012번 괄호 문제 해결 ===" << std::endl;

    int n;
    std::cin >> n;
    std::cin.ignore();

    for (int i = 0; i < n; i++) {
        std::string line;
        std::getline(std::cin, line);

        std::stack<char> stack;
        bool balance = true;

        for (char c : line) {
            if (c == '(') {
                stack.push(c);
            } else if (c == ')') {
                if (stack.empty()) {
                    balance = false;
                    break;
                }
                stack.pop();
            }
        }
        if (!stack.empty()) {
            balance = false;
        }
        std::cout << (balance ? "YES" : "NO") << "\n";
    }

    std::cout << "================================" << std::endl;
}
