#include "problem_1874.h"
#include <iostream>
#include <vector>
#include <stack>

void solve_problem_1874() {
    std::cout << "=== 1874번 스택 수열 문제 해결 ===" << std::endl;

    int n;
    std::cin >> n;

    std::vector<int> seq(n);
    for (int i = 0; i < n; i++) {
        std::cin >> seq[i];
    }

    std::stack<int> s;
    std::vector<char> result;
    int current = 1;
    bool possible = true;

    for (int i = 0; i < n; i++) {
        int target = seq[i];

        while (current <= target) {
            s.push(current++);
            result.push_back('+');
        }

        if (!s.empty() && s.top() == target) {
            s.pop();
            result.push_back('-');
        } else {
            possible = false;
            break;
        }
    }

    if (!possible) {
        std::cout << "NO\n";
    } else {
        for (char c : result) {
            std::cout << c << "\n";
        }
    }

    std::cout << "================================" << std::endl;
}
