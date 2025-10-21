#include "problem_4999.h"
#include <iostream>
#include <string>
#include <algorithm>

void solve_problem_4999() {
    std::cout << "=== 4999번 아! 문제 해결 ===" << std::endl;

    std::string user;
    std::string doctor;

    std::cin >> user >> doctor;

    int user_a = 0;
    int doctor_a = 0;
    for (int i = 0; i < user.length(); i++) {
        if (user[i] == 'h') {
            break;
        }
        if (user[i] == 'a') {
            user_a++;
        }
    }

    for (int i = 0; i < doctor.length(); i++) {
        if (doctor[i] == 'h') {
            break;
        }
        if (doctor[i] == 'a') {
            doctor_a++;
        }
    }

    if (user_a >= doctor_a) {
        std::cout << "go\n";
    } else {
        std::cout << "no\n";
    }

    std::cout << "================================" << std::endl;
}