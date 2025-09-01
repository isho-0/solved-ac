#include "problem_2445.h"
#include <iostream>

void solve_problem_2445() {
  std::cout << "=== 2445번 별 찍기-8 문제 해결 ===" << std::endl;

  int n;
  std::cout << "N을 입력하세요 : ";
  std::cin >> n;

  std::cout << "입력 : n = " << n << "\n";
  std::cout << "출력 : " << "\n";

  for (int i = 1; i <= 2 * n - 1; i++) {
    int stars = (i <= n) ? i : 2 * n - i;
    int spaces = 2 * (n - stars);

    for (int j = 0; j < stars; j++)
      std::cout << "*";
    for (int j = 0; j < spaces; j++)
      std::cout << " ";
    for (int j = 0; j < stars; j++)
      std::cout << "*";

    std::cout << "\n";
  }

  std::cout << "================================" << std::endl;
}
