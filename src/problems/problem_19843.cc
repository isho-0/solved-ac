#include "problem_19843.h"
#include <iostream>
#include <string>
#include <unordered_map>

void solve_problem_19843() {
    std::cout << "=== 19843번 수면 패턴 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int T, N;
    std::cin >> T >> N;

    std::unordered_map<std::string, int> day = {
        {"Mon", 0}, {"Tue", 24}, {"Wed", 48}, {"Thu", 72}, {"Fri", 96}
    };

    long long total = 0;

    for (int i = 0; i < N; i++) {
        std::string D1, D2;
        int H1, H2;
        std::cin >> D1 >> H1 >> D2 >> H2;

        int start = day[D1] + H1;
        int end   = day[D2] + H2;

        total += (end - start);
    }

    long long need = T - total;

    if (need <= 0) {
        std::cout << 0;
    } else if (need > 48) {
        std::cout << -1;
    } else {
        std::cout << need;
    }

    std::cout << "================================" << std::endl;
}
