#include "problem_1620.h"
#include <iostream>
#include <vector>
#include <unordered_map>

void solve_problem_1620() {
    std::cout << "=== 1620번 나는야 포켓몬 마스터 이다솜 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, m;
    std::cin >> n >> m;

    std::cin.ignore();
    std::vector<std::string> pokemon(n + 1);
    std::unordered_map<std::string, int> pokemon_map;

    for (int i = 1; i <= n; i++) {
        std::cin >> pokemon[i];
        pokemon_map[pokemon[i]] = i;
    }

    for (int i = 0; i < m; i++) {
        std::string command;
        std::cin >> command;

        if (isdigit(command[0])) {
            int num = stoi(command);
            std::cout << pokemon[num] << "\n";
        } else {
            std::cout << pokemon_map[command] << "\n";
        }
    }

    std::cout << "================================" << std::endl;
}
