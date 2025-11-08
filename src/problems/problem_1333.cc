#include "problem_1333.h"
#include <iostream>

void solve_problem_1333() {
    std::cout << "=== 1333번 부재중 전화 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, l, d;
    std::cin >> n >> l >> d;

    int ring = 0;
    while (true) {
        bool heard = true;

        for (int i = 0; i < n; i++) {
            int song_start = i * (l + 5);
            int song_end = song_start + l;

            if (ring >= song_start && ring < song_end) {
                heard = false;
                break;
            }
        }

        if (heard) {
            std::cout << ring << '\n';
            return;
        }

        ring += d;
    }

    std::cout << "================================" << std::endl;
}
