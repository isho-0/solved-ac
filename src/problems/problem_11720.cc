#include "problem_11720.h"
#include <iostream>
#include <string>

void solve_problem_11720() {
    int num;
    std::cin >> num;

    int sum = 0;
    std::string num_str;
    std::cin >> num_str;
    for (int i = 0; i < num; i++) {
        sum += num_str[i] - '0';
    }

    std::cout << sum << "\n";
}
