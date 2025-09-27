#include "problem_5576.h"
#include <iostream>
#include <vector>
#include <algorithm>

void solve_problem_5576() {
    std::cout << "=== 5576번 콘테스트 문제 해결 ===" << std::endl;

    std::vector<int> univ_w(10);
    std::vector<int> univ_k(10);

    for (int i = 0; i < 10; i++) {
        std::cin >> univ_w[i];
    }
    std::sort(univ_w.begin(), univ_w.end());

    for (int i = 0; i < 10; i++) {
        std::cin >> univ_k[i];
    }
    std::sort(univ_k.begin(), univ_k.end());

    int w_scores = univ_w[9] + univ_w[8] + univ_w[7];
    int k_scores = univ_k[9] + univ_k[8] + univ_k[7];

    std::cout << w_scores << " " << k_scores << "\n";

    std::cout << "================================" << std::endl;
}
