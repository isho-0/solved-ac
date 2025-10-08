#include "problem_1427.h"
#include <iostream>
#include <algorithm>
#include <string>

void solve_problem_1427() {
    std::cout << "=== 1427번 소트인사이드 해결 ===" << std::endl;

    std::string number;
    std::cin >> number;

    std::sort(number.begin(), number.end(), std::greater<char>());

    std::cout << number << "\n";

    std::cout << "================================" << std::endl;
}
