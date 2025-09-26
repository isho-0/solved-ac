#include "problem_3040.h"
#include <iostream>
#include <algorithm>

void solve_problem_3040() {
    std::cout << "=== 3040 백설 공주와 일곱 난쟁이 문제 해결 ===" << std::endl;

    int n[9], total = 0;

    for (int i = 0; i < 9; i++) {
        std::cin >> n[i];
        total += n[i];
    }

    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (total - n[i] - n[j] == 100) {
                int res[7], idx = 0;
                for (int k = 0; k < 9; k++) {
                    if (k != i && k != j) res[idx++] = n[k];
                }

                std::sort(res, res + 7);
                for (int k = 0; k < 7; k++) std::cout << res[k] << "\n";
                return;
            }
        }
    }

    std::cout << "================================" << std::endl;
}
