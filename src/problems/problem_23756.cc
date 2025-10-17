#include "problem_23756.h"
#include <iostream>
#include <algorithm>

void solve_problem_23756() {
    std::cout << "=== 23756번 노브 돌리기 문제 해결 ===" << std::endl;

    int n;
    std::cin >> n;

    int default_angle;
    std::cin >> default_angle;

    int total = 0;
    for(int i = 0; i < n; i++){
        int move_angle;
        std::cin >> move_angle;

        int angle_wise = (move_angle - default_angle + 360) % 360;
        int counter_angle_wise = (default_angle - move_angle + 360) % 360;

        total += std::min(angle_wise, counter_angle_wise);
        default_angle = move_angle;
    }
    std::cout << total << "\n";

    std::cout << "================================" << std::endl;
}
