#include "problem_5014.h"
#include <iostream>
#include <vector>
#include <queue>

void solve_problem_5014() {
    std::cout << "=== 5014번 스타트링크 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int f, s, g, u, d;
    std::cin >> f >> s >> g >> u >> d;

    std::vector<bool> visited(f + 1, false);
    std::queue<std::pair<int, int> > q;

    q.emplace(s, 0);
    visited[s] = true;

    while (!q.empty()) {
        auto [floor, cnt] = q.front();
        q.pop();

        if (floor == g) {
            std::cout << cnt << '\n';
            return;
        }

        int up = floor + u;
        if (up <= f && !visited[up]) {
            visited[up] = true;
            q.emplace(up, cnt + 1);
        }

        int down = floor - d;
        if (down >= 1 && !visited[down]) {
            visited[down] = true;
            q.emplace(down, cnt + 1);
        }
    }
    std::cout << "use the stairs\n";

    std::cout << "================================" << std::endl;
}

