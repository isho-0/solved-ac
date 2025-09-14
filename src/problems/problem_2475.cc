#include "problem_2475.h"
#include <iostream>

void solve_problem_2475() {
    std::cout << "=== 2475번 검증수 문제 해결 ===" << std::endl;

    int arr[6];
    int last_arr_num = 0;

    for (int i = 0; i < 5; i++) {
        std::cin >> arr[i];
        last_arr_num += (arr[i] * arr[i]);
    }
    arr[5] = last_arr_num % 10;

    std::cout << arr[5] << "\n";

    std::cout << "================================" << std::endl;
}
