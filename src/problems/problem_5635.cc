#include "problem_5635.h"
#include <iostream>
#include <vector>

void solve_problem_5635() {
    std::cout << "=== 5635번 생일 문제 해결 ===" << std::endl;

    int n;
    std::cout << "정수 n을 입력하세요 (예: 3) : ";
    std::cin >> n;

    std::vector<Student> students(n);

    for (int i = 0; i < n; i++) {
        std::cin >> students[i].name >> students[i].day >> students[i].month >> students[i].year;
    }

    Student oldest = students[0];
    Student youngest = students[0];

    for (int i = 1; i < n; i++) {
        if (students[i].year < oldest.year ||
            (students[i].year == oldest.year && students[i].month < oldest.month) ||
            (students[i].year == oldest.year && students[i].month == oldest.month && students[i].day < oldest.day)) {
            oldest = students[i];
        }

        if (students[i].year > youngest.year ||
            (students[i].year == youngest.year && students[i].month > youngest.month) ||
            (students[i].year == youngest.year && students[i].month == youngest.month && students[i].day > youngest.
             day)) {
            youngest = students[i];
        }
    }

    std::cout << "가장 나이가 적은 사람: " << youngest.name << "\n";
    std::cout << "가장 나이가 많은 사람: " << oldest.name << "\n";

    std::cout << "================================" << std::endl;
}
