#include "problem_1152.h"
#include <iostream>
#include <string>
#include <sstream>

void solve_problem_1152() {
    std::cout << "=== 1152번 단어의 개수 해결 ===" << std::endl;

    std::string line;
    getline(std::cin, line);

    std::stringstream ss(line);
    std::string word;
    int count = 0;

    while (ss >> word) {
        count++;
    }

    std::cout << count << "\n";

    std::cout << "================================" << std::endl;
}
