#include "solved.h"

#include <iostream>
#include <string>

int main() {
  std::cout << "=== Solved.ac 문제 해결 프로젝트 ===" << std::endl;
  std::cout << "문제 번호를 입력하세요: ";

  std::string problem_number;
  std::getline(std::cin, problem_number);

  if (!problem_number.empty()) {
    int problem_num = std::stoi(problem_number);
    std::cout << "문제 " << problem_num << "을(를) 해결하겠습니다." << std::endl;

    // 문제별 해결 함수 호출
    switch (problem_num) {
      case 1000: {
        std::cout << "두 정수 A와 B를 입력하세요 (예: 1, 2)";
        int a, b;
        std::cin >> a >> b;
        solved_ac::a_plus_b(a, b);
        break;
      }
      case 1001: {
        std::cout << "두 정수 A와 B를 입력하세요 (예: 3 2): ";
        int a, b;
        std::cin >> a >> b;
        solved_ac::solve_ab(a, b);
        break;
      }
      case 2741: {
        std::cout << "N을 입력하세요: ";
        int n;
        std::cin >> n;
        solved_ac::solve_n_print(n);
        break;
      }
      default:
        solved_ac::show_welcome_message();
        break;
    }
  } else {
    std::cout << "문제 번호가 입력되지 않았습니다." << std::endl;
  }

  return 0;
}
