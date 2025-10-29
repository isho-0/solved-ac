#include "problem_2804.h"
#include <iostream>
#include <string>

void solve_problem_2804() {
    std::cout << "=== 2804번 크로스워드 만들기 문제 해결 ===" << std::endl;

    std::string a, b;
    std::cin >> a >> b;

    int n = a.size();
    int m = b.size();
    int sameA = -1, sameB = -1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i] == b[j]) {
                sameA = i;
                sameB = j;
                break;
            }
        }
        if (sameA != -1) break;
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (i == sameB && j == sameA) {
                std::cout << a[j];
            }
            else if (i == sameB) {
                std::cout << a[j];
            }
            else if (j == sameA) {
                std::cout << b[i];
            }
            else {
                std::cout << ".";
            }
        }
        std::cout << "\n";
    }

    std::cout << "================================" << std::endl;
}
