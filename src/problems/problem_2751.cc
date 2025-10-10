#include "problem_2751.h"
#include <iostream>
#include <vector>
#include <algorithm>

void solve_problem_2751() {
    std::cout << "=== 2751번 수 정렬하기 2 문제 해결 ===" << std::endl;

    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (int i = 0; i < n; i++) {
        std::cin >> num[i];
    }
    std::sort(num.begin(), num.end());

    for (int i = 0; i < n; i++) {
        std::cout << num[i] << "\n";
    }

    std::cout << "================================" << std::endl;
}
