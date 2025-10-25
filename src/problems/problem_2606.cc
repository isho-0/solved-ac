#include "problem_2606.h"
#include <iostream>
#include <vector>

static void dfs(int node, std::vector<std::vector<int> > &graph, std::vector<bool> &visited, int &count) {
    visited[node] = true;

    for (int next : graph[node]) {
        if (!visited[next]) {
            count++;
            dfs(next, graph, visited, count);
        }
    }
}

void solve_problem_2606() {
    std::cout << "=== 2606번 바이러스 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, m;
    std::cin >> n >> m;

    std::vector<std::vector<int>> graph(n + 1);
    std::vector<bool> visited(n + 1, false);

    for (int i = 0; i < m; i++) {
        int a, b;
        std::cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    int count = 0;
    dfs(1, graph, visited, count);

    std::cout << count << "\n";

    std::cout << "================================" << std::endl;
}
