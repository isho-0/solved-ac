#include "problem_5586.h"
#include <iostream>
#include <string>

void solve_problem_5586() {
    std::cout << "=== 5586번 JOI와 IOI 문제 해결 ===" << std::endl;

    std::string input;
    std::cin >> input;
    std::cin.ignore();

    int count_JOI = 0;
    int count_IOI = 0;
    for (int i = 0; i < input.size(); i++) {
        if (input[i] == 'J') {
            if (input[i+1] == 'O') {
                if (input[i+2] == 'I') {
                    count_JOI++;
                }
            }
        }
        if (input[i] == 'I') {
            if (input[i+1] == 'O') {
                if (input[i+2] == 'I') {
                    count_IOI++;
                }
            }
        }
    }
    std::cout << count_JOI <<
        "\n" << count_IOI << "\n";

    std::cout << "================================" << std::endl;
}
