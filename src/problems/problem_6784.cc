#include "problem_6784.h"
#include <iostream>
#include <vector>
#include <string>

void solve_problem_6784() {
    std::cout << "=== 6784번 Multiple Choice 문제 해결 ===" << std::endl;

    int n;
    std::cin >> n;

    std::vector<char> student(n);
    std::vector<char> answer(n);

    for (int i = 0; i < n; i++) {
        std::cin >> student[i];
    }

    for (int i = 0; i < n; i++) {
        std::cin >> answer[i];
    }

    int correct = 0;
    for (int i = 0; i < n; i++) {
        if (student[i] == answer[i]) correct++;
    }

    std::cout << correct << "\n";

    std::cout << "================================" << std::endl;
}
