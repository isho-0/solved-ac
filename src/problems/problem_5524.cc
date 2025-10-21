#include "problem_5524.h"
#include <iostream>
#include <string>

void solve_problem_5524() {
    std::cout << "=== 5524번 입실 관리 문제 해결 ===" << std::endl;

    int n;
    std::cin >> n;
    std::cin.ignore();

    std::string s;
    for (int i = 0; i < n; i++) {
        getline(std::cin, s);
        for (int j = 0; j < s.length(); j++) {
            if (s[j] >= 'A' && s[j] <= 'Z') {
                s[j] = s[j] - 'A' + 'a';
            }
        }
        std::cout << s << "\n";
    }

    std::cout << "================================" << std::endl;
}
