#include "problem_2753.h"
#include <iostream>

void solve_problem_2753() {
    std::cout << "=== 2753번 윤년 문제 해결 ===" << std::endl;

    int year;
    std::cin >> year;

    if ( year % 4 == 0 && year % 100 != 0 || year % 400 == 0 ) {
        std::cout << "1\n";
    }else {
        std::cout << "0\n";
    }

    std::cout << "================================" << std::endl;
}