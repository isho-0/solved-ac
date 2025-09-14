#include "problem_10569.h"
#include <iostream>

void solve_problem_10569() {
    std::cout << "=== 10569번 다면체 문제 해결 ===" << std::endl;

    int t;

    std::cin >> t;

    for (int i = 0; i < t; i++) {
        int v, e, f; // v는 꼭짓점의 개수, e는 모서리의 개수, f는 면의 개수

        std::cin >> v >> e;

        f = e - v + 2;

        std::cout << f << "\n";
    }

    std::cout << "================================" << std::endl;
}
