#include "problem_18110.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

void solve_problem_18110() {
    std::cout << "=== 18110번 solved.ac 문제 해결 ===" << std::endl;

    int n;
    std::cin >> n;

    if (n == 0) {
        std::cout << 0 << "\n";
        return;
    }

    std::vector<int> v(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }

    std::sort(v.begin(), v.end());

    int cut = round(n * 0.15);

    int sum = 0;
    for (int i = cut; i < n - cut; i++) {
        sum += v[i];
    }

    double avg = (double)sum / (n - 2 * cut);
    std::cout << (int)round(avg) << "\n";

    std::cout << "================================" << std::endl;
}
