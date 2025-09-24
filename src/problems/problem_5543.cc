#include "problem_5543.h"
#include <iostream>
#include <climits>

void solve_problem_5543() {
    std::cout << "=== 5543번 상근날드 문제 해결 ===" << std::endl;

    int burger_price;
    int drink_price;

    int min_price_of_burger = INT_MAX;
    int min_price_of_drink = INT_MAX;

    for (int i = 0; i < 3; i++) {
        std::cin >> burger_price;
        if (burger_price < min_price_of_burger) {
            min_price_of_burger = burger_price;
        }
    }

    for (int i = 0; i < 2; i++) {
        std::cin >> drink_price;
        if (drink_price < min_price_of_drink) {
            min_price_of_drink = drink_price;
        }
    }

    std::cout << min_price_of_burger + min_price_of_drink - 50 << "\n";

    std::cout << "================================" << std::endl;
}
