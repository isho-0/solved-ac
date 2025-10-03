#include "problem_1357.h"
#include <iostream>
#include <string>

static int revert(const std::string &num) {
    std::string rev = num;
    std::reverse(rev.begin(), rev.end());
    return std::stoi(rev);
}

void solve_problem_1357() {
    std::cout << "=== 1357번 뒤짓힌 덧셈 문제 해결 ===" << std::endl;

    std::string x, y;
    std::cin >> x >> y;

    int rev_x = revert(x);
    int rev_y = revert(y);

    int rev_sum = rev_x + rev_y;

    std::string sum_str = std::to_string(rev_sum);
    std::reverse(sum_str.begin(), sum_str.end());

    std::cout << std::stoi(sum_str) << "\n";

    std::cout << "================================" << std::endl;
}
