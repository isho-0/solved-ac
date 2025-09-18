#include "problem_2577.h"
#include <iostream>
#include <string>

void solve_problem_2577() {
    std::cout << "=== 2577번 숫자의 개수 문제 해결 ===" << std::endl;

    int a, b, c;
    int result = 0;
    int freq[10] = {0};

    std::cin >> a >> b >> c;

    result = a * b * c;

    std::string s = std::to_string(result);

    for (char ch: s) {
        int digit = ch - '0';
        freq[digit]++;
    }

    for (int i = 0; i <= 9; i++) {
        std::cout << freq[i] << "\n";
    }

    std::cout << "================================" << std::endl;
}
