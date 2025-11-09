#include "problem_29725.h"
#include <iostream>
#include <string>

static int getScore(char c) {
    switch (c) {
        case 'Q': case 'q': return 9;
        case 'R': case 'r': return 5;
        case 'B': case 'b': return 3;
        case 'N': case 'n': return 3;
        case 'P': case 'p': return 1;

        default: return 0;
    }
}

void solve_problem_29725() {
    std::cout << "=== 29725번 체스 초보 브실이 문제 해결 ===" << std::endl;
    
    std::iostream::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int white = 0;
    int black = 0;

    for (int i = 0; i < 8; i++) {
        std::string line;
        std::cin >> line;

        for (char c : line) {
            if (std::isupper(c)) {
                white += getScore(c);
            } else if (std::islower(c)) {
                black += getScore(c);
            }
        }
    }
    std::cout << white - black << '\n';

    std::cout << "================================" << std::endl;
}
