#include "problem_1408.h"
#include <iostream>
#include <iomanip>
#include <sstream>

CTU::CTU() : hour(0), minute(0), second(0) {}

void CTU::input_time() {
  std::string t;
  std::cin >> t;
  hour   = (t[0] - '0') * 10 + (t[1] - '0');
  minute = (t[3] - '0') * 10 + (t[4] - '0');
  second = (t[6] - '0') * 10 + (t[7] - '0');
}

int CTU::get_hour() const { return hour; }
int CTU::get_minute() const { return minute; }
int CTU::get_second() const { return second; }

std::string CTU::str() const {
  std::ostringstream oss;
  oss << std::setfill('0')
      << std::setw(2) << hour << ":"
      << std::setw(2) << minute << ":"
      << std::setw(2) << second;
  return oss.str();
}

void normalize_time(int &hour, int &minute, int &second) {
  if (second < 0) {
    second += 60;
    minute -= 1;
  }
  if (minute < 0) {
    minute += 60;
    hour -= 1;
  }
  if (hour < 0) {
    hour += 24;
  }
}

void solve_problem_1408() {
  std::cout << "=== 1408번 24 문제 해결 ===" << std::endl;

  std::cout << "시간을 입력하세요 (예: 13:52:30 14:00:00) : ";
  CTU user1, user2;
  user1.input_time();
  user2.input_time();
  std::cout << "입력 :  시간1 = " << user1.str()
          << ", 시간2 = " << user2.str() << "\n";

  int h = user2.get_hour() - user1.get_hour();
  int m = user2.get_minute() - user1.get_minute();
  int s = user2.get_second() - user1.get_second();

  normalize_time(h, m, s);

  std::cout << "출력 : ";
  std::cout << std::setfill('0')
      << std::setw(2) << h << ":"
      << std::setw(2) << m << ":"
      << std::setw(2) << s << std::endl;

  std::cout << "================================" << std::endl;
}
