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

// 2438번 별 찍기-1 문제 해결 함수
// 첫째 줄에는 별 1개, 둘째 줄에는 별 2개, n번째 줄에는 별 n개를 찍는 문제
// @param n 정수 (1 <= n <= 9)
void print_stars_1(int n);

// 2439번 별 찍기-2 문제 해결 함수
// 첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제
// @param n 정수 (1 <= n <= 100)
void print_stars_2(int n);

// 2440번 별 찍기-3 문제 해결 함수
// 첫째 줄에는 별 N개, 둘째 줄에는 별 N-1개, ..., N번째 줄에는 별 1개를 찍는 문제
// @param n 정수 (1 <= n <= 100)
void print_stars_3(int n);

// 2441번 별 찍기-4 문제 해결 함수
// 첫째 줄에는 별 N개, 둘째 줄에는 별 N-1개, ..., N번째 줄에는 별 1개를 찍는 문제
// @param n 정수 (1 <= n <= 100)
void print_stars_4(int n);

// 2739번 구구단 문제 해결 함수
// N을 입력받은 뒤, 구구단 N단을 출력하는 프로그램을 작성하시오. 출력 형식에 맞춰서 출력하면 된다.
// @param n 정수 (1 <= n <= 9)
void print_n_dan(int n);

// 2741번 N 찍기 문제 해결 함수
// 자연수 N이 주어졌을 때, 1부터 N까지 한 줄에 하나씩 출력하는 프로그램을 작성하시오.
// @param n 정수 (n <= 100000)
void n_printing(int n);

// 2742번 기찍 N 문제 해결 함수
// 자연수 N이 주어졌을 때, N부터 1까지 한 줄에 하나씩 출력하는 프로그램을 작성하시오.
// @param n 정수 (n <= 100000)
void reverse_n_printing(int n);

// 8393번 합 문제 해결 함수
// 정수 n을 입력받아 1부터 n까지의 합을 출력합니다.
// @param n 정수 (1 <= n <= 10000)
void sum_from_one_to_n(int n);

// 10950번 A+B-3 문제 해결 함수
// 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
// @param T 정수
// @param A 정수 B 정수 (0 <= A, B <= 10)
void a_add_b_3(int t);

// 10952번 A+B-5 문제 해결 함수
// 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
void a_add_b_5();


}  // namespace solved_ac

#endif  // SOLVED_AC_SOLVED_H_
