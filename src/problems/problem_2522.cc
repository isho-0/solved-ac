#include "problem_2522.h"
#include <iostream>

void solve_problem_2522() {
  std::cout << "=== 2444번 별 찍기-7 문제 해결 ===" << std::endl;

  int n;
  std::cout << "N을 입력하세요 : ";
  std::cin >> n;

  std::cout << "입력 : n = " << n << "\n";
  std::cout << "출력 : " << "\n";

  for (int i = 1; i <= 2*n - 1; i++) {
    int spaces = (i <= n) ? n - i : i - n;
    int stars  = (i <= n) ? i     : 2*n - i;

    for (int j = 0; j < spaces; j++) std::cout << " ";
    for (int j = 0; j < stars;  j++) std::cout << "*";
    std::cout << "\n";
  }

  std::cout << "================================" << std::endl;
}
