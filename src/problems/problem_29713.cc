#include "problem_29713.h"
#include <iostream>
#include <string>
#include <map>
#include <algorithm>

void solve_problem_29713() {
    std::cout << "=== 29713번 브실이의 띠부띠부씰 컬렉션 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    std::string s;
    std::cin >> s;

    std::map<char, int> need = {
        {'B', 1}, {'R', 2}, {'0', 1}, {'N', 1}, {'Z', 1},
        {'E', 2}, {'S', 1}, {'I', 1}, {'L', 1}, {'V', 1}
    };

    std::map<char, int> have;
    for (char c: s) {
        have[c]++;
    }

    int result = 1e9;
    for (auto [ch, cnt]: need) {
        result = std::min(result, have[ch] / cnt);
    }

    std::cout << result << '\n';

    std::cout << "================================" << std::endl;
}
