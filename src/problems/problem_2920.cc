#include "problem_2920.h"
#include <algorithm>
#include <iostream>
#include <vector>

void solve_problem_2920() {
    std::cout << "=== 2920번 음계 문제 해결 ===" << std::endl;

    std::vector<int> numbers(8);
    for (int i = 0; i < 8; i++) {
        std::cin >> numbers[i];
    }

    std::vector<int> asc = numbers;
    std::vector<int> desc = numbers;
    sort(asc.begin(), asc.end());
    sort(desc.rbegin(), desc.rend());

    if (numbers == asc) {
        std::cout << "ascending\n";
    }else if (numbers == desc) {
        std::cout << "descending\n";
    }else {
        std::cout << "mixed\n";
    }

    std::cout << "================================" << std::endl;
}