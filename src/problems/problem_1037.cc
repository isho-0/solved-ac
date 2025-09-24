#include "problem_1037.h"
#include <iostream>
#include <vector>
#include <algorithm>

void solve_problem_1037() {
    std::cout << "=== 1037번 약수 문제 해결 ===" << std::endl;

    int test_case;
    std::cin >> test_case;

    std::vector<int> n(test_case);
    for (int i = 0; i < test_case; i++) {
        std::cin >> n[i];
    }

    int min_val = *std::min_element(n.begin(), n.end());
    int max_val = *std::max_element(n.begin(), n.end());

    std::cout << min_val * max_val << "\n";

    std::cout << "================================" << std::endl;
}