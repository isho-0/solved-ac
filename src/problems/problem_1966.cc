#include "problem_1966.h"
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

void solve_problem_1966() {
    std::cout << "=== 1966번 프린터 큐 문제 해결 ===" << std::endl;

    int test_case;
    std::cin >> test_case;

    while (test_case--) {
        int n, m;
        std::cin >> n >> m;

        std::vector<int> important_numbers(n);
        std::queue<std::pair<int, int>> q;

        for (int i = 0; i < n; i++) {
            std::cin >> important_numbers[i];
            q.push({i, important_numbers[i]});
        }

        std::sort(important_numbers.begin(), important_numbers.end(), std::greater<int>());

        int print_count = 0;
        int idx = 0;

        while (!q.empty()) {
            int cur_idx = q.front().first;
            int cur_val = q.front().second;
            q.pop();

            if (cur_val == important_numbers[idx]) {
                print_count++;
                idx++;

                if (cur_idx == m) {
                    std::cout << print_count << '\n';
                    break;
                }
            } else {
                q.push({cur_idx, cur_val});
            }
        }
    }

    std::cout << "================================" << std::endl;
}
