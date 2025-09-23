#include "problem_2822.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve_problem_2822() {
    std::cout << "=== 2822번 점수 계산 문제 해결 ===" << std::endl;

    vector<pair<int,int>> v;

    for(int i = 0; i < 8; i++) {
        int x;
        cin >> x;
        v.push_back({x, i+1});
    }

    sort(v.begin(), v.end(), [](auto &a, auto &b) {
        return a.first > b.first;
    });

    int sum = 0;
    vector<int> idx;
    for (int i = 0; i < 5; i++) {
        sum += v[i].first;
        idx.push_back(v[i].second);
    }

    sort(idx.begin(), idx.end());

    cout << sum << "\n";
    for (int x : idx) cout << x << " ";

    std::cout << "================================" << std::endl;
}
