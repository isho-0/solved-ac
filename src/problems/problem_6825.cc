#include "problem_6825.h"
#include <iostream>

void solve_problem_6825() {
    std::cout << "=== 6825번 Body Mass Index 문제 해결 ===" << std::endl;

    double weight, height;
    std::cin >> weight >> height;

    double bmi = weight / (height * height);

    if (bmi > 25.0) {
        std::cout << "Overweight\n";
    } else if (bmi >= 18.5 && bmi <= 25.0) {
        std::cout << "Normal weight\n";
    } else {
        std::cout << "Underweight\n";
    }

    std::cout << "================================" << std::endl;
}
