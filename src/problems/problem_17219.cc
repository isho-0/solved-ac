#include "problem_17219.h"
#include <iostream>
#include <unordered_map>
#include <string>

void solve_problem_17219() {
    std::cout << "=== 17219번 비밀번호 찾기 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, m;
    std::cin >> n >> m;

    std::unordered_map<std::string, std::string> pwd_map;
    pwd_map.reserve(n * 2);
    for (int i = 0; i < n; i++) {
        std::string site, pw;
        std::cin >> site >> pw;
        pwd_map[site] = pw;
    }

    for (int i = 0; i < m; i++) {
        std::string command;
        std::cin >> command;
        std::cout << pwd_map[command] << "\n";
    }

    std::cout << "================================" << std::endl;
}
