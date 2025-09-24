#include "problem_2752.h"
#include <iostream>
#include <algorithm>
#include <vector>

void solve_problem_2752() {
    std::cout << "=== 2752번 세 수 정렬 문제 해결 ===" << std::endl;

    int test_case = 3;
    std::vector<int> arr(test_case);

    for(int i = 0; i < 3; i++){
        std::cin >> arr[i];
    }

    std::sort(arr.begin(), arr.end());

    for(int i = 0; i < 3; i++){
        std::cout << arr[i] << " ";
    }

    std::cout << "\n";

    std::cout << "================================" << std::endl;
}