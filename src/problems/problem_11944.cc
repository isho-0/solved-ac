#include "problem_11944.h"
#include <iostream>
#include <string>

void solve_problem_11944() {
    std::cout << "=== 11944번 NN 문제 해결 ===" << std::endl;

    int n, m;
    std::cin >> n >> m;

    std::string s = std::to_string(n);
    std::string result;

    for (int i = 0; i < n; i++) {
        result += s;
        if ((int) result.size() >= m) {
            result = result.substr(0, m);
            break;
        }
    }

    std::cout << "================================" << std::endl;
}
