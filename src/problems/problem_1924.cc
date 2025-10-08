#include "problem_1924.h"
#include <iostream>

enum day {
    MON, TUE, WED, THU, FRI, SAT, SUN
};

void solve_problem_1924() {
    std::cout << "=== 1924번 2007년 문제 해결 ===" << std::endl;

    int month, day;
    std::cin >> month >> day;

    int month_days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int total_days = 0;

    for (int i = 0; i < month - 1; i++) {
        total_days += month_days[i];
    }

    total_days += day;

    int day_index = (total_days - 1) % 7;

    switch (day_index) {
        case MON: std::cout << "MON";
            break;
        case TUE: std::cout << "TUE";
            break;
        case WED: std::cout << "WED";
            break;
        case THU: std::cout << "THU";
            break;
        case FRI: std::cout << "FRI";
            break;
        case SAT: std::cout << "SAT";
            break;
        case SUN: std::cout << "SUN";
            break;
    }
    std::cout << "\n";

    std::cout << "================================" << std::endl;
}
