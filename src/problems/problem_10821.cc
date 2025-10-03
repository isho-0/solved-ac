#include "problem_10821.h"
#include <iostream>
#include <string>

void solve_problem_10821() {
    std::cout << "=== 10821번 정수의 개수 문제 해결 ===" << std::endl;

    std::string word;
    std::cin >> word;

    int count = 1;
    for(int i = 0; i < word.size(); i++){
        if(word[i] == ','){
            count++;
        }
    }
    std::cout << count << "\n";

    std::cout << "================================" << std::endl;
}
