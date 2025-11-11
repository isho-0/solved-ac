#include "problem_5893.h"
#include <iostream>
#include <string>
#include <algorithm>

static std::string add_binary(const std::string& a, const std::string& b) {
    std::string result;
    int carry = 0;
    int i = (int)a.size() - 1, j = (int)b.size() - 1;
    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) sum += a[i--] - '0';
        if (j >= 0) sum += b[j--] - '0';
        result.push_back((sum % 2) + '0');
        carry = sum / 2;
    }
    std::reverse(result.begin(), result.end());

    return result;
}

void solve_problem_5893() {
    std::cout << "=== 5893번 17배 문제 해결 ===" << std::endl;

    std::string n;
    std::cin >> n;
    std::string shifted = n + "0000";
    std::cout << add_binary(shifted, n) << '\n';

    std::cout << "================================" << std::endl;
}
