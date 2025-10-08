#include "problem_2720.h"
#include <iostream>

void cal(int price) {
    int quarter = price / 25;
    price %= 25;

    int dime = price / 10;
    price %= 10;

    int nickel = price / 5;
    price %= 5;

    int penny = price;

    std::cout << quarter << " "
            << dime << " "
            << nickel << " "
            << penny << "\n";
}


void solve_problem_2720() {
    std::cout << "=== 2720번 세탁소 사장 동혁 문제 해결 ===" << std::endl;

    int test_case;
    std::cin >> test_case;

    int price = 0;
    for (int i = 0; i < test_case; i++) {
        std::cin >> price;
        cal(price);
    }

    std::cout << "================================" << std::endl;
}
