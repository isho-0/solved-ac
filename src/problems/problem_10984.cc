#include "problem_10984.h"
#include <iostream>
#include <iomanip>

void solve_problem_10984(){
  std::cout << "=== 10984번 내 학점을 구해줘 문제 해결 ===" << std::endl;

  int t;
  std::cin >> t;

  while (t--) {
    int n;
    std::cin >> n;

    int total_c = 0;
    double weighted_g = 0;

    for (int i = 0; i < n; i++) {
      int c;
      double g;
      std::cin >> c >> g;

      total_c += c;
      weighted_g += c * g;
    }

    std::cout << total_c << " " << std::fixed << std::setprecision(2) << (weighted_g / total_c) << "\n";
  }

  std::cout << "================================" << std::endl;
}
