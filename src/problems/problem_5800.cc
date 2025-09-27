#include "problem_5800.h"
#include <iostream>
#include <vector>
#include <algorithm>

void solve_problem_5800() {
    std::cout << "=== 5800번 성적 통계 문제 해결 ===" << std::endl;

    int test_case;
    std::cin >> test_case;

    for (int i = 0; i < test_case; i++) {
        int n;
        std::cin >> n;
        std::vector<int> numbers(n);

        for (int j = 0; j < n; j++) {
            std::cin >> numbers[j];
        }

        sort(numbers.begin(), numbers.end(), std::greater<int>());

        int largest_gap = 0;
        for (int j = 0; j < n - 1; j++) {
            largest_gap = std::max(largest_gap, numbers[j] - numbers[j + 1]);
        }

        std::cout << "Class " << i + 1 << "\n";
        std::cout << "Max " << numbers[0]
             << ", Min " << numbers[n - 1]
             << ", Largest gap " << largest_gap << "\n";
    }

    std::cout << "================================" << std::endl;
}