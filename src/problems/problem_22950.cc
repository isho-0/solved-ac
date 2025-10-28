#include "problem_22950.h"
#include <iostream>
#include <string>

void solve_problem_22950() {
    std::cout << "=== 22950번 이진수 나눗셈 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    std::string m;
    std::cin >> m;

    int K;
    std::cin >> K;

    if (K == 0) {
        std::cout << "YES\n";
        return;
    }

    if (K >= n) {
        if (m.find('1') == std::string::npos)
            std::cout << "YES\n";
        else
            std::cout << "nO\n";
    } else {
        bool ok = true;
        for (int i = n - K; i < n; ++i) {
            if (m[i] != '0') {
                ok = false;
                break;
            }
        }
        std::cout << (ok ? "YES\n" : "nO\n");
    }

    std::cout << "================================" << std::endl;
}