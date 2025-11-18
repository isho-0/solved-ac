#include "problem_3047.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

void solve_problem_3047() {
    std::cout << "=== 3047번 ABC 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::vector<int> num(3);
    for (int i = 0; i < 3; i++) {
        std::cin >> num[i];
    }

    std::sort(num.begin(), num.end());

    std::string order;
    std::cin >> order;

    for (char c: order) {
        if (c == 'A') std::cout << num[0] << " ";
        else if (c == 'B') std::cout << num[1] << " ";
        else if (c == 'C') std::cout << num[2] << " ";
    }

    std::cout << "================================" << std::endl;
}
