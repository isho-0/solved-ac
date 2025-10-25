#include "problem_4949.h"
#include <iostream>
#include <string>
#include <stack>

void solve_problem_4949() {
    std::cout << "=== 4949번 균형잡힌 세상 문제 해결 ===" << std::endl;

    std::string line;

    while (true) {
        std::getline(std::cin, line);

        if (line == ".") {
            break;
        }

        std::stack<char> stack;
        bool balance = true;

        for (char c: line) {
            if (c == '(' || c == '[') {
                stack.push(c);
            } else if (c == ')') {
                if (stack.empty() || stack.top() != '(') {
                    balance = false;
                    break;
                }
                stack.pop();
            } else if (c == ']') {
                if (stack.empty() || stack.top() != '[') {
                    balance = false;
                    break;
                }
                stack.pop();
            }
        }
        if (!stack.empty()) {
            balance = false;
        }

        std::cout << (balance ? "yes" : "no") << "\n";
    }

    std::cout << "================================" << std::endl;
}
