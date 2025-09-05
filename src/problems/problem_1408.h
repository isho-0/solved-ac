#ifndef PROBLEM_1408_H
#define PROBLEM_1408_H

#include <string>

class CTU {
private:
  int hour;
  int minute;
  int second;

public:
  CTU();
  void input_time();
  int get_hour() const;
  int get_minute() const;
  int get_second() const;
  std::string str() const;
};

void normalize_time(int &hour, int &minute, int &second);
void solve_problem_1408();

#endif