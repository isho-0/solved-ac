#ifndef PROBLEM_2908_H
#define PROBLEM_2908_H

class Number {
private:
  int hundreds;
  int tens;
  int ones;

public:
  Number(int value);

  void swap_digits();

  int to_int() const;
};

void solve_problem_2908();

#endif