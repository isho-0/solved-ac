#include "problem_2693.h"
#include <iostream>
#include <vector>
#include <algorithm>

void solve_problem_2693() {
    int test_case;
    std::cin >> test_case;

    std::vector<int> numbers(10);
    for (int i = 0; i < test_case; i++) {
        for (int j = 0; j < 10; j++) {
            std::cin >> numbers[j];
        }
        std::sort(numbers.begin(), numbers.end());
        std::cout << numbers[7] << "\n";
    }

}
