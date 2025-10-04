#ifndef PROBLEM_10828_H
#define PROBLEM_10828_H

#include <string>

class Stack {
public:
    Stack();
    ~Stack();

    void push(int val);
    int pop();
    int size() const;
    int top() const;
    bool empty() const;

private:
    int *data;
    int capacity;
    int count;
};

void solve_problem_10828();

#endif
