#include "problem_17293.h"
#include <iostream>
#include <string>

static std::string bottle(int k) {
    if (k > 1) {
        return std::to_string(k) + " bottles";
    }
    if (k == 1) {
        return "1 bottle";
    }
    return "no more bottles";
}

void solve_problem_17293() {
    std::cout << "=== 17293번 맥주 99병 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    for (int i = n; i >= 1; i--) {
        std::cout << bottle(i) << " of beer on the wall, " <<
            bottle(i) << " of beer.\n";

        int next = i - 1;
        std::cout << "Take one down and pass it around, " <<
            bottle(next) << " of beer on the wall.\n";

        std::cout << '\n';
    }

    std::cout << "No more bottles of beer on the wall, no more bottles of beer.\n";

    std::cout << "Go to the store and buy some more, " <<
        bottle(n) << " of beer on the wall.\n";

    std::cout << "================================" << std::endl;
}
