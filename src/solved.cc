#include "solved.h"

#include <iostream>

namespace solved_ac {

void show_welcome_message() {
  std::cout << "안녕하세요! solved.ac 문제를 해결해보겠습니다." << std::endl;
  std::cout << "문제 해결을 위한 기본 템플릿이 준비되었습니다." << std::endl;
}

void print_result(int problem_number, const std::string& result) {
  std::cout << "=== 문제 " << problem_number << " 해결 결과 ===" << std::endl;
  std::cout << "결과: " << result << std::endl;
  std::cout << "================================" << std::endl;
}

void solve_n_print(int n) {
  std::cout << "=== 2741번 N 찍기 문제 해결 ===" << std::endl;
  std::cout << "입력: " << n << std::endl;
  std::cout << "출력:" << std::endl;

  // 1부터 n까지 한 줄에 하나씩 출력
  for (int i = 1; i <= n; ++i) {
    std::cout << i << std::endl;
  }

  std::cout << "================================" << std::endl;
}

void solve_ab(int a, int b) {
  std::cout << "=== 1001번 A-B 문제 해결 ===" << std::endl;
  std::cout << "입력: A=" << a << ", B=" << b << std::endl;
  std::cout << "출력: " << std::endl;

  // a-b 계산 및 출력
  std::cout << a - b << std::endl;

  std::cout << "================================" << std::endl;
}

}  // namespace solved_ac
