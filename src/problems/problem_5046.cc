#include "problem_5046.h"
#include <iostream>
#include <vector>
#include <limits>

void solve_problem_5046() {
    std::cout << "=== 5046번 전국 대학생 프로그래밍 대회 동아리 연합 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, b, h, w;
    std::cin >> n >> b >> h >> w;

    int answer = std::numeric_limits<int>::max();

    for (int i = 0; i < h; i++) {
        int p;
        std::cin >> p;

        std::vector<int> weeks(w);
        for (int j = 0; j < w; j++) {
            std::cin >> weeks[j];
        }

        for (int j = 0; j < w; j++) {
            if (weeks[j] >= n) {
                long long cost = 1LL * p * n;
                if (cost <= b) {
                    if (cost < answer) {
                        answer = cost;
                    }
                }
            }
        }
    }

    if (answer == std::numeric_limits<int>::max()) {
        std::cout << "stay home\n";
    } else {
        std::cout << answer << "\n";
    }

    std::cout << "================================" << std::endl;
}
