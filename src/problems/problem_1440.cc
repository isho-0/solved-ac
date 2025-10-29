#include "problem_1440.h"
#include <iostream>
#include <string>
#include <algorithm>

void solve_problem_1440() {
    std::cout << "=== 1440번 타임머신 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string time;
    std::cin >> time;

    std::string a = time.substr(0, 2);
    std::string b = time.substr(3, 2);
    std::string c = time.substr(6, 2);

    std::string nums[3] = {a, b, c};
    int count = 0;

    int perm[3] = {0, 1, 2};
    do {
        int h = std::stoi(nums[perm[0]]);
        int m = std::stoi(nums[perm[1]]);
        int s = std::stoi(nums[perm[2]]);

        if (h >= 1 && h <= 12 && m >= 0 && m <= 59 && s >= 0 && s <= 59)
            count++;
    } while (std::next_permutation(perm, perm + 3));

    std::cout << count << '\n';

    std::cout << "================================" << std::endl;
}
