#include "problem_2108.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>

void solve_problem_2108() {
    std::cout << "=== 2108번 통계학 문제 해결 ===" << std::endl;

    int n;
    std::cin >> n;

    std::vector<int> v(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }

    std::sort(v.begin(), v.end());

    double sum = 0;
    for (int i: v) {
        sum += i;
    }
    std::cout << (int) round(sum / n) << "\n";

    std::cout << v[n / 2] << "\n";

    std::map<int, int> freq;
    for (int i: v) {
        freq[i]++;
    }
    int max_freq = 0;
    for (auto &p : freq) {
        max_freq = std::max(max_freq, p.second);
    }
    std::vector<int> mode;
    for (auto &p: freq) {
        if (p.second == max_freq) {
            mode.push_back(p.first);
        }
    }
    if (mode.size() > 1) {
        std::cout << mode[1] << "\n";
    } else {
        std::cout << mode[0] << "\n";
    }

    std::cout << v.back() - v.front() << "\n";

    std::cout << "================================" << std::endl;
}
