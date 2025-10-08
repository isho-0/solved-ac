#include "problem_3052.h"
#include <iostream>
#include <set>

void solve_problem_3052() {
    std::cout << "=== 3052번 나머지 문제 해결 ===" << std::endl;

    int n;
    std::set<int> remainders;

    for (int i = 0; i < 10; i++) {
        std::cin >> n;
        remainders.insert(n % 42);
    }

    std::cout << remainders.size() << "\n";

    std::cout << "================================" << std::endl;
}
