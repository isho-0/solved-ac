#include "problem_28702.h"
#include <iostream>
#include <string>

static std::string fizzbuzz(int n) {
    if (n % 15 == 0) {
        return "FizzBuzz";
    }
    if (n % 3 == 0) {
        return "Fizz";
    }
    if (n % 5 == 0) {
        return "Buzz";
    }
    return std::to_string(n);
}

void solve_problem_28702() {
    std::cout << "=== 28702번 FizzBuzz 문제 해결 ===" << std::endl;

    std::string a, b, c;
    std::cin >> a >> b >> c;

    int base = -1;
    if (isdigit(a[0])) {
        base = stoi(a) + 2;
    } else if (isdigit(b[0])) {
        base = stoi(b) + 1;
    } else if (isdigit(c[0])) {
        base = stoi(c);
    }

    std::cout << fizzbuzz(base + 1) << "\n";

    std::cout << "================================" << std::endl;
}
