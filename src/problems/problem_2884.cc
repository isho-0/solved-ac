#include "problem_2884.h"
#include <iostream>

void solve_problem_2884() {
    std::cout << "=== 2884번 알람 시계 문제 해결 ===" << std::endl;

    int hour, minute;
    std::cin >> hour >> minute;

    minute -= 45;
    if (minute < 0) {
        minute += 60;
        hour -= 1;
        if (hour < 0) {
            hour += 24;
        }
    }

    std::cout << hour << " " << minute << "\n";

    std::cout << "================================" << std::endl;
}
