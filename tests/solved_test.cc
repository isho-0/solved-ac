#include "solved.h"

#include <cassert>
#include <iostream>
#include <sstream>

// 간단한 테스트 매크로 정의
#define TEST_ASSERT(condition) assert(condition)
#define TEST_ASSERT_NE(haystack, needle) \
  assert(haystack.find(needle) != std::string::npos)

// 테스트를 위한 출력 캡처 클래스
class SolvedTest {
 public:
  std::stringstream buffer;
  std::streambuf* old_cout;

  void SetUp() {
    old_cout = std::cout.rdbuf();
    std::cout.rdbuf(buffer.rdbuf());
  }

  void TearDown() {
    std::cout.rdbuf(old_cout);
  }
};

void TestShowWelcomeMessage() {
  SolvedTest test;
  test.SetUp();

  solved_ac::show_welcome_message();

  std::string output = test.buffer.str();
  TEST_ASSERT_NE(output, "안녕하세요!");
  TEST_ASSERT_NE(output, "solved.ac");
  TEST_ASSERT_NE(output, "문제를 해결해보겠습니다");

  test.TearDown();
}

void TestPrintResult() {
  SolvedTest test;
  test.SetUp();

  solved_ac::print_result(1000, "테스트 결과");

  std::string output = test.buffer.str();
  TEST_ASSERT_NE(output, "문제 1000");
  TEST_ASSERT_NE(output, "테스트 결과");
  TEST_ASSERT_NE(output, "해결 결과");

  test.TearDown();
}

void TestSolveNPrint() {
  SolvedTest test;
  test.SetUp();

  solved_ac::solve_n_print(5);

  std::string output = test.buffer.str();
  TEST_ASSERT_NE(output, "2741번 N 찍기 문제 해결");
  TEST_ASSERT_NE(output, "입력: 5");

  test.TearDown();
}

void TestSolveAB() {
  SolvedTest test;
  test.SetUp();

  solved_ac::solve_ab(3, 2);

  std::string output = test.buffer.str();
  TEST_ASSERT_NE(output, "1001번 A-B 문제 해결");
  TEST_ASSERT_NE(output, "입력: A=3, B=2");
  TEST_ASSERT_NE(output, "1");  // 3 - 2 = 1

  test.TearDown();
}

int main() {
  TestShowWelcomeMessage();
  TestPrintResult();
  TestSolveNPrint();
  TestSolveAB();

  std::cout << "모든 테스트가 통과했습니다!" << std::endl;
  return 0;
}
