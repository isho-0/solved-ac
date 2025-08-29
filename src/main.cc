#include "solved.h"

#include <iostream>
#include <string>

int main() {
  std::cout << "=== Solved.ac 문제 해결 프로젝트 ===" << std::endl;
  std::cout << "문제 번호를 입력하세요 : ";

  std::string problem_number;
  std::getline(std::cin, problem_number);

  if (!problem_number.empty()) {
    int problem_num = std::stoi(problem_number);
    std::cout << "문제 " << problem_num << "을(를) 해결하겠습니다." << std::endl;

    switch (problem_num) {
      case 1000: {
        int a, b;

        std::cout << "두 정수 A와 B를 입력하세요 (예: 1, 2) : ";
        std::cin >> a >> b;

        solved_ac::a_add_b(a, b);

        break;
      }

      case 1001: {
        int a, b;

        std::cout << "두 정수 A와 B를 입력하세요 (예: 3 2) : ";
        std::cin >> a >> b;

        solved_ac::a_sub_b(a, b);

        break;
      }

      case 2438: {
        int n;

        std::cout << "N을 입력하세요 : ";
        std::cin >> n;

        solved_ac::print_stars_1(n);

        break;
      }

      case 2739: {
        int n;

        std::cout << "N을 입력하세요 : ";
        std::cin >> n;

        solved_ac::print_n_dan(n);

        break;
      }

      case 2741: {
        int n;

        std::cout << "N을 입력하세요 : ";
        std::cin >> n;

        solved_ac::n_printing(n);

        break;
      }

      case 2742: {
        int n;

        std::cout << "N을 입력하세요 : ";
        std::cin >> n;

        solved_ac::reverse_n_printing(n);

        break;
      }

      case 8393: {
        int n;

        std::cout << "N을 입력하세요 : ";
        std::cin >> n;

        solved_ac::sum_from_one_to_n(n);

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
