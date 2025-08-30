#include "solved.h"

#include <iostream>

namespace solved_ac {

void show_welcome_message() {
  std::cout << "안녕하세요! solved.ac 문제를 해결해보겠습니다." << std::endl;
  std::cout << "문제 해결을 위한 기본 템플릿이 준비되었습니다." << std::endl;
}

void print_result(int problem_number, const std::string& result) {
  std::cout << "=== 문제 " << problem_number << " 해결 결과 ===" << std::endl;
  std::cout << "결과 : " << result << std::endl;
  std::cout << "================================" << std::endl;
}

void a_add_b(int a, int b) {
  std::cout << "=== 1000번 A+B 문제 해결 ===" << std::endl;
  std::cout << "입력 : A = " << a << ", B = " << b << std::endl;
  std::cout << "출력 : " << std::endl;

  std::cout << a + b << std::endl;

  std::cout << "================================" << std::endl;
}

void a_sub_b(int a, int b) {
  std::cout << "=== 1001번 A-B 문제 해결 ===" << std::endl;
  std::cout << "입력 : A = " << a << ", B = " << b << std::endl;
  std::cout << "출력 : " << std::endl;

  std::cout << a - b << std::endl;

  std::cout << "================================" << std::endl;
}

void print_stars_1(int n) {
  std::cout << "=== 2438번 별 찍기-1 문제 해결 ===" << std::endl;
  std::cout << "입력 : n = " << n << std::endl;
  std::cout << "출력 : " << std::endl;
  ;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      std::cout << "*";
    }
    std::cout << std::endl;
  }

  std::cout << "================================" << std::endl;
}

void print_stars_2(int n) {
  std::cout << "=== 2439번 별 찍기-2 문제 해결 ===" << std::endl;
  std::cout << "입력 : n = " << n << std::endl;
  std::cout << "출력 : " << std::endl;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n - i; j++) {
      std::cout << " ";
    }
    for (int j = 1; j <= i; j++) {
      std::cout << "*";
    }
    std::cout << "\n";
  }

  std::cout << "================================" << std::endl;
}

void print_stars_3(int n) {
  std::cout << "=== 2440번 별 찍기-3 문제 해결 ===" << std::endl;
  std::cout << "입력 : n = " << n << std::endl;
  std::cout << "출력 : " << std::endl;

  for (int i = 1; i <= n; i++) {
    for (int j = n; j >= i; j--) {
      std::cout << "*";
    }
    std::cout << "\n";
  }

  std::cout << "================================" << std::endl;
}

void print_stars_4(int n) {
  std::cout << "=== 2441번 별 찍기-4 문제 해결 ===" << std::endl;
  std::cout << "입력 : n = " << n << std::endl;
  std::cout << "출력 : " << std::endl;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if (j <= i - 1) {
        std::cout << " ";
      } else {
        std::cout << "*";
      }
    }
    std::cout << "\n";
  }

  std::cout << "================================" << std::endl;
}

void print_n_dan(int n) {
  std::cout << "=== 2739번 구구단 문제 해결 ===" << std::endl;
  std::cout << "입력 : n = " << n << std::endl;
  std::cout << "출력 : " << std::endl;

  for (int i = 1; i <= 9; i++) {
    std::cout << n << " * " << i << " = " << n * i << std::endl;
  }

  std::cout << "================================" << std::endl;
}

void n_printing(int n) {
  std::cout << "=== 2741번 N 찍기 문제 해결 ===" << std::endl;
  std::cout << "입력 : n = " << n << std::endl;
  std::cout << "출력 : " << std::endl;

  for (int i = 1; i <= n; i++) {
    std::cout << i << std::endl;
  }

  std::cout << "================================" << std::endl;
}

void reverse_n_printing(int n) {
  std::cout << "=== 2742번 기찍 N 문제 해결 ===" << std::endl;
  std::cout << "입력 : n = " << n << std::endl;
  std::cout << "출력 : " << std::endl;

  for (int i = n; i >= 1; i--) {
    std::cout << i << std::endl;
  }

  std::cout << "================================" << std::endl;
}

void sum_from_one_to_n(int n) {
  std::cout << "=== 8393번 합 문제 해결 ===" << std::endl;
  std::cout << "입력 : n = " << n << std::endl;
  std::cout << "출력 : " << std::endl;
  int sum = 0;

  for (int i = 1; i <= n; i++) {
    sum += i;
  }

  std::cout << sum << std::endl;

  std::cout << "================================" << std::endl;
}

void a_add_b_3(int t) {
  std::cout << "=== 10950번 A+B-3 문제 해결 ===" << std::endl;
  std::cout << "입력 : T = " << t << std::endl;

  int a, b;

  for (int i = t; i > 0; i--) {
    std::cin >> a >> b;
    std::cout << "입력 : A = " << a << ", B = " << b << std::endl;
    std::cout << "출력 : ";
    std::cout << a + b << std::endl;
  }

  std::cout << "================================" << std::endl;
}

void a_add_b_5() {
  std::cout << "=== 10952번 A+B-5 문제 해결 ===" << std::endl;

  int a, b;

  while (true) {
    std::cout << "두 정수 A와 B를 입력하세요 : ";
    std::cin >> a >> b;

    if (a == 0 && b == 0) {
      break;
    }

    std::cout << "출력 : ";
    std::cout << a + b << std::endl;
  }

  std::cout << "================================" << std::endl;
}

}  // namespace solved_ac
