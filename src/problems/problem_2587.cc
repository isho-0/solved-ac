#include "problem_2587.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

void solve_problem_2587() {
    std::cout << "=== 2587번 대표값2 문제 해결 ===" << std::endl;

    std::vector<int> v(5);
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        std::cin >> v[i];
        sum += v[i];
    }

    std::sort(v.begin(), v.end());
    auto mid = v.begin();
    std::advance(mid, 2);

    std::cout << sum / 5 << "\n";
    std::cout << *mid << "\n";

    std::cout << "================================" << std::endl;
}
