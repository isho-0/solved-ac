#include "problem_4153.h"
#include <iostream>
#include <algorithm>

void solve_problem_4153() {
    std::cout << "=== 4153번 직각삼각형 문제 해결 ===" << std::endl;

    int a, b, c;

    while (true) {
        std::cin >> a >> b >> c;
        if (a == 0 && b == 0 && c == 0) {
            break;
        }

        int arr[3] = {a, b, c};
        std::sort(arr, arr + 3);

        if (arr[0] * arr[0] + arr[1] * arr[1] == arr[2] * arr[2]) {
            std::cout << "right\n";
        } else {
            std::cout << "wrong\n";
        }
    }

    std::cout << "================================" << std::endl;
}
