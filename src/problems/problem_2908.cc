#include "problem_2908.h"
#include <iostream>
#include <algorithm>

Number::Number(int value) {
  hundreds = value / 100;
  tens = (value / 10) % 10;
  ones = value % 10;
}

void Number::swap_digits() {
  int temp = hundreds;
  hundreds = ones;
  ones = temp;
}

int Number::to_int() const {
  return hundreds * 100 + tens * 10 + ones;
}

void solve_problem_2908() {
  std::cout << "=== 2908번 상수 문제 해결 ===" << std::endl;

  int a, b;
  std::cout << "두 정수 A와 B를 입력하세요 (예: 734 893) : ";
  std::cin >> a >> b;

  std::cout << "입력 : A = " << a << ", B = " << b << "\n";
  std::cout << "출력 : " << "\n";

  Number numA(a);
  Number numB(b);

  numA.swap_digits();
  numB.swap_digits();

  int val_a = numA.to_int();
  int val_b = numB.to_int();

  std::cout << std::max(val_a, val_b) << std::endl;

  std::cout << "================================" << std::endl;
}
