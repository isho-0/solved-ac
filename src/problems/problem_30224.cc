#include "problem_30224.h"
#include <iostream>
#include <string>

void solve_problem_30224() {
    std::cout << "=== 30224번 Lucky 7 문제 해결 ===" << std::endl;

    long long n;
    std::cin >> n;

    std::string s = std::to_string(n);
    const bool has7 = (s.find('7') != std::string::npos);

    bool divisible = (n % 7 == 0);

    if (!has7 && !divisible) std::cout << 0;
    else if (!has7 && divisible) std::cout << 1;
    else if (has7 && !divisible) std::cout << 2;
    else std::cout << 3;

    std::cout << "================================" << std::endl;
}
