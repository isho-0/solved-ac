#include "problem_7568.h"
#include <iostream>
#include <vector>

void solve_problem_7568() {
    std::cout << "=== 7568번 덩치 문제 해결 ===" << std::endl;

    int n;
    std::cin >> n;

    std::vector<std::pair<int, int> > people(n);

    for (int i = 0; i < n; i++) {
        std::cin >> people[i].first >> people[i].second;
    }

    for (int i = 0; i < n; i++) {
        int rank = 1;
        for (int j = 0; j < n; j++) {
            if (i == j) {
                continue;
            }
            if (people[j].first > people[i].first &&
                people[j].second > people[i].second) {
                rank++;
            }
        }
        std::cout << rank << " ";
    }

    std::cout << "\n";

    std::cout << "================================" << std::endl;
}
