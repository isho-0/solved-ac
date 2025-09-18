#ifndef PROBLEM_MANAGER_H
#define PROBLEM_MANAGER_H

#include <functional>
#include <unordered_map>
#include <string>

class ProblemManager {
private:
    std::unordered_map<int, std::function<void()> > problems_;

public:
    ProblemManager();

    void run();

    void solve_problem(int number);
};

#endif
