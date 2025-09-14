#include "problem_5565.h"
#include <iostream>

void solve_problem_5565() {
    std::cout << "=== 5565번 영수증 문제 해결 ===" << std::endl;

    int book_price;
    int book_max_price;
    int buy_price_total = 0;

    std::cin >> book_max_price;

    for (int i = 0; i < 9; i++) {
        std::cin >> book_price;
        buy_price_total += book_price;
    }

    std::cout << book_max_price - buy_price_total << std::endl;

    std::cout << "================================" << std::endl;
}
