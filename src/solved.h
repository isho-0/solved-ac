#ifndef SOLVED_AC_SOLVED_H_
#define SOLVED_AC_SOLVED_H_

#include <string>

namespace solved_ac {

// solved.ac 문제 해결 시작 메시지를 출력하는 함수
// 이 함수는 solved.ac 문제 해결을 위한 기본 템플릿 함수입니다.
// 각 문제별로 이 함수를 수정하여 사용할 수 있습니다.
void show_welcome_message();

// 문제 해결 결과를 출력하는 함수
// @param problem_number 문제 번호
// @param result 결과 문자열
void print_result(int problem_number, const std::string& result);

// 2741번 N 찍기 문제 해결 함수
// 자연수 N이 주어졌을 때, 1부터 N까지 한 줄에 하나씩 출력
// @param n 입력받은 자연수 (1 ≤ n ≤ 100,000)
void solve_n_print(int n);

// 1000번 A+B 문제 해결 함수
// 두 정수 A와 B를 입력받아 A+B를 출력합니다.
// @param a 첫 번째 정수 (0 < a < 10)
// @param b 첫 번째 정수 (0 < b < 10)
void a_add_b(int a, int b);

// 1001번 A-B 문제 해결 함수
// 두 정수 A와 B를 입력받아 A-B를 출력합니다.
// @param a 첫 번째 정수 (0 < a < 10)
// @param b 두 번째 정수 (0 < b < 10)
void a_sub_b(int a, int b);

// 2741번 N 찍기 문제 해결 함수
// 자연수 N이 주어졌을 때, 1부터 N까지 한 줄에 하나씩 출력하는 프로그램을
// 작성하시오.
// @param n 정수 (n <= 100000)
void n_printing(int n);

// 8393번 1부터 n까지 합 문제 해결 함수
// 정수 n을 입력받아 1부터 n까지의 합을 출력합니다.
// @param n 정수 (1 <= n <= 10000)
void sum_from_one_to_n(int n);

}  // namespace solved_ac

#endif  // SOLVED_AC_SOLVED_H_
