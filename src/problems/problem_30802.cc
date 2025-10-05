#include "problem_30802.h"
#include <iostream>
#include <vector>

void solve_problem_30802() {
    std::cout << "=== 30802번 웰컴 키트 문제 해결 ===" << std::endl;

    int people;
    std::cin >> people;

    std::vector<int> v(6);
    std::cin >> v[0] >> v[1] >> v[2] >> v[3] >> v[4] >> v[5];

    int t, p;
    std::cin >> t >> p;

    int total_box = 0;
    for (int i = 0; i < 6; i++) {
        total_box += (v[i] + t - 1) / t;
    }

    int pen_set = people / p;
    int remaining_pen = people % p;

    std::cout << total_box <<"\n";
    std::cout << pen_set << " " << remaining_pen << "\n";

    std::cout << "================================" << std::endl;
}