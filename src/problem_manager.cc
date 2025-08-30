#include "problem_manager.h"
#include <iostream>
#include <string>

// 문제별 헤더 파일들
#include "problems/problem_1000.h"
#include "problems/problem_1001.h"
#include "problems/problem_2438.h"
#include "problems/problem_2439.h"
#include "problems/problem_2440.h"
#include "problems/problem_2441.h"
#include "problems/problem_2442.h"
#include "problems/problem_2443.h"
#include "problems/problem_2739.h"
#include "problems/problem_2741.h"
#include "problems/problem_2742.h"
#include "problems/problem_8393.h"
#include "problems/problem_10950.h"
#include "problems/problem_10952.h"

ProblemManager::ProblemManager() {
    // 문제 등록
    problems_[1000] = solve_problem_1000;
    problems_[1001] = solve_problem_1001;
    problems_[2438] = solve_problem_2438;
    problems_[2439] = solve_problem_2439;
    problems_[2440] = solve_problem_2440;
    problems_[2441] = solve_problem_2441;
    problems_[2442] = solve_problem_2442;
    problems_[2443] = solve_problem_2443;
    problems_[2739] = solve_problem_2739;
    problems_[2741] = solve_problem_2741;
    problems_[2742] = solve_problem_2742;
    problems_[8393] = solve_problem_8393;
    problems_[10950] = solve_problem_10950;
    problems_[10952] = solve_problem_10952;
}

void ProblemManager::run() {
    std::cout << "=== Solved.ac 문제 해결 프로젝트 ===" << std::endl;
    std::cout << "문제 번호를 입력하세요 : ";
    
    std::string problem_number;
    std::getline(std::cin, problem_number);
    
    if (!problem_number.empty()) {
        int problem_num = std::stoi(problem_number);
        solveProblem(problem_num);
    } else {
        std::cout << "문제 번호가 입력되지 않았습니다." << std::endl;
    }
}

void ProblemManager::solveProblem(int number) {
    auto it = problems_.find(number);
    if (it != problems_.end()) {
        std::cout << "문제 " << number << "을(를) 해결하겠습니다." << std::endl;
        it->second(); // 문제 해결 함수 호출
    } else {
        std::cout << "문제 " << number << "은(는) 아직 구현되지 않았습니다." << std::endl;
    }
}
