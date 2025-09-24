#include "problem_2750.h"
#include <iostream>
#include <algorithm>
#include <vector>

void solve_problem_2750() {
    std::cout << "=== 2750번 수 정렬하기 문제 해결 ===" << std::endl;

    int test_case;
    std::cin >> test_case;

    std::vector<int> arr(test_case);
    for (int i = 0; i < test_case; i++) {
        std::cin >> arr[i];
    }

    std::sort(arr.begin(), arr.end());

    for (int i = 0; i < test_case; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";

    std::cout << "================================" << std::endl;
}