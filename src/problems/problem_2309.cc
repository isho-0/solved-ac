#include "problem_2309.h"
#include <iostream>
#include <vector>
#include <algorithm>

void solve_problem_2309() {
    std::cout << "=== 2309 일곱 난쟁이 문제 해결 ===" << std::endl;

    std::vector<int> n(9);
    int sum = 0;

    for (int i = 0; i < 9; i++) {
        std::cin >> n[i];
        sum += n[i];
    }

    int x = -1, y = -1;
    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (sum - n[i] - n[j] == 100) {
                x = i;
                y = j;
                break;
            }
        }
        if (x != -1) {
            break;
        }
    }

    std::vector<int> answer;
    for (int i = 0; i < 9; i++) {
        if (i == x || i == y) {
            continue;
        }
        answer.push_back(n[i]);
    }

    std::sort(answer.begin(), answer.end());
    for (int i : answer) {
        std::cout << i << "\n";
    }

    std::cout << "================================" << std::endl;
}