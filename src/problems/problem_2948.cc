#include "problem_2948.h"
#include <iostream>
#include <string>

int month_days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int total_days(int month, int day) {
    int n = 0;
    for (int i = 1; i < month; i++) {
        n += month_days[i];
    }
    n += day;
    return n;
}

void solve_problem_2948() {
    std::cout << "=== 2948번 2009년 문제 해결 ===" << std::endl;

    int day, month;
    std::cin >> day >> month;

    int days = total_days(month, day);

    switch (days % 7) {
        case 1: std::cout << "Thursday";
            break;
        case 2: std::cout << "Friday";
            break;
        case 3: std::cout << "Saturday";
            break;
        case 4: std::cout << "Sunday";
            break;
        case 5: std::cout << "Monday";
            break;
        case 6: std::cout << "Tuesday";
            break;
        case 0: std::cout << "Wednesday";
            break;
    }

    std::cout << "\n";

    std::cout << "================================" << std::endl;
}
