#include "problem_10773.h"
#include <iostream>
#include <stack>

void solve_problem_10773() {
    std::cout << "=== 10773 제로 문제 해결 ===" << std::endl;

    int K;
    std::cin >> K;

    std::stack<int> books;
    for (int i = 0; i < K; i++) {
        int value;
        std::cin >> value;

        if (value != 0) {
            books.push(value);
        } else if (!books.empty()) { // 비어있지 않을 때만 pop
            books.pop();
        }
    }

    int sum = 0;
    while (!books.empty()) {
        sum += books.top();
        books.pop();
    }

    std::cout << sum << "\n";

    std::cout << "================================" << std::endl;
}
