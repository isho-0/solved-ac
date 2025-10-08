#include "problem_2798.h"
#include <iostream>
#include <vector>

void solve_problem_2798() {
    std::cout << "=== 2798번 블랙잭 문제 해결 ===" << std::endl;

    int n, m;
    std::cin >> n >> m;

    std::vector<int> cards(n);
    for (int i = 0; i < n; i++) {
        std::cin >> cards[i];
    }

    int result = 0;
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                int sum = cards[i] + cards[j] + cards[k];
                if (sum <= m && sum > result) {
                    result = sum;
                }
            }
        }
    }

    std::cout << result << "\n";

    std::cout << "================================" << std::endl;
}
