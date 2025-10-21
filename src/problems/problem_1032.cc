#include "problem_1032.h"
#include <iostream>
#include <string>
#include <vector>

void solve_problem_1032() {
    std::cout << "=== 1032번 명령 프롬프트 문제 해결 ===" << std::endl;

    int n;
    std::cin >> n;

    std::vector<std::string> v(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }

    std::string result;
    for (int j = 0; j < v[0].size(); j++) {
        bool same = true;
        char c = v[0][j];
        for (int i = 1; i < n; i++) {
            if (v[i][j] != c) {
                same = false;
                break;
            }
        }
        result.push_back(same ? c : '?');
    }

    std::cout << result << "\n";

    std::cout << "================================" << std::endl;
}
