#include "problem_10699.h"
#include <iostream>
#include <iomanip>
#include <ctime>

void solve_problem_10699() {
    std::cout << "=== 10699번 오늘 날짜 문제 해결 ===" << std::endl;

    time_t now = time(0);
    tm *ltm = localtime(&now);

    int year = 1900 + ltm->tm_year;
    int month = 1 + ltm->tm_mon;
    int day = ltm->tm_mday;

    std::cout << year << "-"
            << std::setw(2) << std::setfill('0') << month << "-"
            << std::setw(2) << std::setfill('0') << day << "\n";

    std::cout << "================================" << std::endl;
}
