#include "problem_10816.h"
#include <iostream>
#include <unordered_map>

void solve_problem_10816() {
    std::cout << "=== 10816번 숫자 카드 2 문제 해결 ===" << std::endl;

    int n;
    std::cin >> n;

    std::unordered_map<int, int> cards;
    for (int i = 0; i < n; i++) {
        int num;
        std::cin >> num;
        cards[num]++;
    }

    int m;
    std::cin >> m;
    for (int i = 0; i < m; i++) {
        int query;
        std::cin >> query;
        std::cout << cards[query] << " ";
    }
    std::cout << "\n";

    std::cout << "================================" << std::endl;
}
