#include "problem_5176.h"
#include <iostream>
#include <vector>

void solve_problem_5176() {
    std::cout << "=== 5176 대회 자리 문제 해결 ===" << std::endl;

    int T;
    std::cin >> T;

    while (T--) {
        int P, M;
        std::cin >> P >> M;

        std::vector<bool> taken(M + 1, false);
        int cnt = 0;

        for (int i = 0; i < P; i++) {
            int want;
            std::cin >> want;

            if (want <= M && !taken[want]) {
                taken[want] = true;
            } else {
                cnt++;
            }
        }

        std::cout << cnt << "\n";
    }

    std::cout << "================================" << std::endl;
}
