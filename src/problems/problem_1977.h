#ifndef PROBLEM_1977_H
#define PROBLEM_1977_H


class PerfectSquareFinder {
private:
  int m;
  int n;
  int sum;
  int min_val;

public:
  PerfectSquareFinder(int m, int n);

  void find();
  void print_result() const;
};

void solve_problem_1977();

#endif