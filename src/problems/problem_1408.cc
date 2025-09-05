#include "problem_1408.h"
#include <iostream>
#include <iomanip>
#include <sstream>

void CTU::input_time() {
  std::string t;
  std::cin >> t;
  hour   = stoi(t.substr(0, 2));
  minute = stoi(t.substr(3, 2));
  second = stoi(t.substr(6, 2));
}

CTU CTU::diff(const CTU &t1, const CTU &t2) {
  CTU result;
  result.hour   = t2.hour   - t1.hour;
  result.minute = t2.minute - t1.minute;
  result.second = t2.second - t1.second;

  if (result.second < 0) {
    result.second += 60;
    result.minute -= 1;
  }
  if (result.minute < 0) {
    result.minute += 60;
    result.hour -= 1;
  }
  if (result.hour < 0) {
    result.hour += 24;
  }
  return result;
}

std::string CTU::str() const {
  std::ostringstream oss;
  oss << std::setfill('0')
      << std::setw(2) << hour << ":"
      << std::setw(2) << minute << ":"
      << std::setw(2) << second;
  return oss.str();
}

void solve_problem_1408() {
  std::cout << "=== 1408번 24 문제 해결 ===" << std::endl;

  std::cout << "시간을 입력하세요 (예: 13:52:30 14:00:00) : ";
  CTU user1, user2;
  user1.input_time();
  user2.input_time();
  std::cout << "입력 :  시간1 = " << user1.str()
          << ", 시간2 = " << user2.str() << "\n";

  CTU d = CTU::diff(user1, user2);

  std::cout << "출력 : ";
  std::cout << std::setfill('0')
     << std::setw(2) << d.hour << ":"
     << std::setw(2) << d.minute << ":"
     << std::setw(2) << d.second << std::endl;


  std::cout << "================================" << std::endl;
}
