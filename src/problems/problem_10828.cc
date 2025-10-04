#include "problem_10828.h"
#include <iostream>
#include <string>

Stack::Stack() {
    capacity = 10000;
    data = new int[capacity];
    count = 0;
}

Stack::~Stack() {
    delete[] data;
}

void Stack::push(int val) {
    if (count < capacity) {
        data[count++] = val;
    }
}

int Stack::pop() {
    if (count == 0) {
        return -1;
    }
    return data[--count];
}

int Stack::size() const {
    return count;
}

int Stack::top() const {
    if (count == 0) {
        return -1;
    }
    return data[count - 1];
}

bool Stack::empty() const {
    return count == 0;
}

void solve_problem_10828() {
    std::cout << "=== 10828번 스택 문제 해결 ===" << std::endl;

    Stack s;
    int n;
    std::cin >> n;

    while (n--) {
        std::string cmd;
        std::cin >> cmd;

        if (cmd == "push") {
            int val;
            std::cin >> val;
            s.push(val);
        } else if (cmd == "pop") {
            std::cout << s.pop() << '\n';
        } else if (cmd == "size") {
            std::cout << s.size() << '\n';
        } else if (cmd == "empty") {
            std::cout << s.empty() << '\n';
        } else if (cmd == "top") {
            std::cout << s.top() << '\n';
        }
    }
    std::cout << '\n';

    std::cout << "================================" << std::endl;
}
