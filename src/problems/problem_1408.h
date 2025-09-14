#ifndef PROBLEM_1408_H
#define PROBLEM_1408_H

#include <string>

class CTU {
public:
    int hour;
    int minute;
    int second;

    void input_time();

    static CTU diff(const CTU &t1, const CTU &t2);

    std::string str() const;
};

void solve_problem_1408();

#endif
