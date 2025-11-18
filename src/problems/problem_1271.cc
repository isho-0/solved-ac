#include "problem_1271.h"
#include <iostream>
#include <string>

static std::string divide(const std::string &a, const std::string &b, std::string &remainder) {
    int lenA = a.size(), lenB = b.size();
    std::string quotient;
    std::string cur;
    long long carry = 0;

    auto cmp = [](const std::string &x, const std::string &y) {
        if (x.size() != y.size()) {
            return x.size() < y.size() ? -1 : 1;
        }
        if (x == y) {
            return 0;
        }

        return x < y ? -1 : 1;
    };

    auto sub = [](std::string x, const std::string &y) {
        int borrow = 0;
        for (int i = 0; i < (int) y.size() || borrow; ++i) {
            int xi = x[x.size() - 1 - i] - '0';
            int yi = i < (int) y.size() ? y[y.size() - 1 - i] - '0' : 0;
            int val = xi - yi - borrow;
            borrow = val < 0;
            if (borrow) val += 10;
            x[x.size() - 1 - i] = val + '0';
        }
        while (x.size() > 1 && x[0] == '0') {
            x.erase(x.begin());
        }

        return x;
    };

    std::string curNum;
    for (char ch: a) {
        if (curNum == "0") {
            curNum.clear();
        }
        curNum.push_back(ch);
        int count = 0;
        while (cmp(curNum, b) >= 0) {
            curNum = sub(curNum, b);
            count++;
        }
        quotient.push_back(count + '0');
    }

    int pos = 0;
    while (pos + 1 < (int) quotient.size() && quotient[pos] == '0') {
        pos++;
    }
    remainder = curNum.empty() ? "0" : curNum;

    return quotient.substr(pos);
}

void solve_problem_1271() {
    std::cout << "=== 1271번 엄청난 부자2 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string n, m;
    std::cin >> n >> m;

    std::string r;
    std::string q = divide(n, m, r);
    std::cout << q << '\n' << r << '\n';

    std::cout << "================================" << std::endl;
}
