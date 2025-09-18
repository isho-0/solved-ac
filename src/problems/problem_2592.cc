#include "problem_2592.h"
#include <iostream>
#include <vector>
#include <map>

void solve_problem_2592() {
    std::cout << "=== 2592번 대표값 문제 해결 ===" << std::endl;

    int sum = 0;
    int avg;

    std::vector<int> data(10);

    for (int i = 0; i < 10; i++) {
        std::cin >> data[i];
        sum += data[i];
    }
    avg = sum / 10;

    std::map<int, int> freq;

    for (int num: data) {
        freq[num]++;
    }

    int mode = data[0];
    int max_freq = freq[mode];
    for (auto &p: freq) {
        if (p.second > max_freq) {
            max_freq = p.second;
            mode = p.first;
        }
    }

    std::cout << avg << "\n" << mode << "\n";

    std::cout << "================================" << std::endl;
}
