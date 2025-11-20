#include "problem_17202.h"
#include <iostream>
#include <string>
#include <vector>

void solve_problem_17202() {
    std::cout << "=== 17202번 핸드폰 번호 궁합 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string a, b;
    std::cin >> a >> b;

    std::vector<int> v;

    for (int i = 0; i < 8; i++) {
        v.push_back(a[i] - '0');
        v.push_back(b[i] - '0');
    }

    while (v.size() > 2) {
        std::vector<int> next;
        next.reserve(v.size() - 1);

        for (int i = 0; i < v.size() - 1; i++) {
            next.push_back((v[i] + v[i + 1]) % 10);
        }
        v = std::move(next);
    }

    std::cout << v[0] << v[1] << "\n";

    std::cout << "================================" << std::endl;
}
