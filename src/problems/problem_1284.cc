#include "problem_1284.h"
#include <iostream>
#include <string>

void solve_problem_1284() {
    std::cout << "=== 1284번 집 주소 문제 해결 ===" << std::endl;

    while (true) {
        std::string num;
        std::cin >> num;

        if (num[0] == '0') {
            break;
        }

        int blank = num.size() - 1;
        int len = 0;
        int num_blank = 2;
        for (int i = 0; i < num.size(); i++) {
            if (num[i] == '1') {
                len += 2;
            } else if (num[i] == '0') {
                len += 4;
            } else {
                len += 3;
            }
        }
        int sum = blank + len + num_blank;
        std::cout << sum << "\n";
    }

    std::cout << "================================" << std::endl;
}