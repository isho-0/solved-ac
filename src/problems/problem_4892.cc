#include "problem_4892.h"
#include <iostream>
#include <string>

void solve_problem_4892() {
    std::cout << "=== 4892번 숫자 맞추기 게임 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n0;
    int index = 1;

    while (true) {
        std::cin >> n0;
        if (n0 == 0) {
            break;
        }

        int n1 = 3 * n0;
        std::string pairty;

        int n2;
        if (n1 % 2 == 0) {
            pairty = "even";
            n2 = n1 / 2;
        } else {
            pairty = "odd";
            n2 = (n1 + 1) / 2;
        }

        int n3 = 3 * n2;
        int n4 = n3 / 9;

        std::cout << index << ". " << pairty << " " << n4 << '\n';
        index++;
    }

    std::cout << "================================" << std::endl;
}
