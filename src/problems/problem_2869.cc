#include "problem_2869.h"
#include <iostream>

void solve_problem_2869() {
    std::cout << "=== 2869번 달팽이는 올라가고 싶다 문제 해결 ===" << std::endl;

    long long a, b, v;
    std::cin >> a >> b >> v;

    long long day = (v - a) / (a - b);
    if ((v - a) % (a - b) != 0)
        day++;

    std::cout << day + 1 << "\n";

    std::cout << "================================" << std::endl;
}
