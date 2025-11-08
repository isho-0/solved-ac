#include "problem_3985.h"
#include <iostream>
#include <vector>

void solve_problem_3985() {
    std::cout << "=== 3985번 롤 케이크 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int l, n;
    std::cin >> l >> n;

    std::vector<int> cake(l, 0);
    int expected_max = 0;
    int expected_person = 0;

    int real_max = 0;
    int real_person = 0;

    for (int i = 1; i <= n; i++) {
        int p, k;
        std::cin >> p >> k;

        int expected_len = k - p + 1;
        if (expected_len > expected_max) {
            expected_max = expected_len;
            expected_person = i;
        }

        int count = 0;
        for (int j = p - 1; j < k; j++) {
            if (cake[j] == 0) {
                cake[j] = i;
                count++;
            }
        }

        if (count > real_max) {
            real_max = count;
            real_person = i;
        }
    }

    std::cout << expected_person << '\n' << real_person << '\n';

    std::cout << "================================" << std::endl;
}
