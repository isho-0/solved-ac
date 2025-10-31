#include "problem_30804.h"
#include <iostream>
#include <vector>

void solve_problem_30804() {
    std::cout << "=== 30804번 과일 탕후루 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    std::vector<int> fruits(n);
    for (int i = 0; i < n; i++) {
        std::cin >> fruits[i];
    }

    int count[10] = {0};
    int left = 0;
    int right = 0;
    int distinct = 0;
    int ans = 0;

    while (right < n) {
        if (count[fruits[right]] == 0) {
            distinct++;
        }
        count[fruits[right]]++;
        right++;

        while (distinct > 2) {
            count[fruits[left]]--;
            if (count[fruits[left]] == 0) {
                distinct--;
            }
            left++;
        }
        if (right - left > ans) {
            ans = right - left;
        }
    }
    std::cout << ans << '\n';

    std::cout << "================================" << std::endl;
}
