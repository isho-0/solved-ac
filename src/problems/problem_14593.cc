#include "problem_14593.h"
#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>

void solve_problem_14593() {
    std::cout << "=== 14593번 2017 아주대학교 프로그래밍 경시대회 (Large) 문제 해결 ===" << std::endl;

    int n;
    std::cin >> n;

    std::vector<std::tuple<int, int, int, int> > participants;

    for (int i = 1; i <= n; i++) {
        int s, c, l;
        std::cin >> s >> c >> l;
        participants.push_back({s, c, l, i});
    }

    std::sort(participants.begin(), participants.end(), [](auto &a, auto &b) {
        if (std::get<0>(a) != std::get<0>(b)) {
            return std::get<0>(a) > std::get<0>(b);
        }
        if (std::get<1>(a) != std::get<1>(b)) {
            return std::get<1>(a) < std::get<1>(b);
        }
        return std::get<2>(a) < std::get<2>(b);
    });

    std::cout << std::get<3>(participants[0]) << "\n";

    std::cout << "================================" << std::endl;
}
