#include "problem_1920.h"
#include <iostream>
#include <vector>
#include <algorithm>

void solve_problem_1920() {
    std::cout << "=== 1920번 수 찾기 문제 해결 ===" << std::endl;

    int n;
    std::cin >> n;

    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::sort(a.begin(), a.end());

    int m;
    std::cin >> m;

    std::vector<int> b(m);
    for (int i = 0; i < m; i++) {
        std::cin >> b[i];
    }

    for (int i = 0; i < m; i++) {
        if (std::binary_search(a.begin(), a.end(), b[i]))
            std::cout << 1 << "\n";
        else
            std::cout << 0 << "\n";
    }

    std::cout << "================================" << std::endl;
}
