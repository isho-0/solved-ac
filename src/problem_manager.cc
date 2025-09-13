#include "problem_manager.h"
#include "problem_includes.h"
#include <iostream>
#include <string>

ProblemManager::ProblemManager() {
  // 문제 등록
  problems_[1000] = solve_problem_1000;
  problems_[1001] = solve_problem_1001;
  problems_[1408] = solve_problem_1408;
  problems_[1977] = solve_problem_1977;
  problems_[1978] = solve_problem_1978;
  problems_[2010] = solve_problem_2010;
  problems_[2438] = solve_problem_2438;
  problems_[2439] = solve_problem_2439;
  problems_[2440] = solve_problem_2440;
  problems_[2441] = solve_problem_2441;
  problems_[2442] = solve_problem_2442;
  problems_[2443] = solve_problem_2443;
  problems_[2444] = solve_problem_2444;
  problems_[2445] = solve_problem_2445;
  problems_[2446] = solve_problem_2446;
  problems_[2501] = solve_problem_2501;
  problems_[2522] = solve_problem_2522;
  problems_[2523] = solve_problem_2523;
  problems_[2562] = solve_problem_2562;
  problems_[2576] = solve_problem_2576;
  problems_[2581] = solve_problem_2581;
  problems_[2739] = solve_problem_2739;
  problems_[2741] = solve_problem_2741;
  problems_[2742] = solve_problem_2742;
  problems_[2748] = solve_problem_2748;
  problems_[2557] = solve_problem_2557;
  problems_[2609] = solve_problem_2609;
  problems_[2908] = solve_problem_2908;
  problems_[2921] = solve_problem_2921;
  problems_[5522] = solve_problem_5522;
  problems_[5565] = solve_problem_5565;
  problems_[5635] = solve_problem_5635;
  problems_[8393] = solve_problem_8393;
  problems_[9295] = solve_problem_9295;
  problems_[9325] = solve_problem_9325;
  problems_[10569] = solve_problem_10569;
  problems_[10178] = solve_problem_10178;
  problems_[10833] = solve_problem_10833;
  problems_[10871] = solve_problem_10871;
  problems_[10872] = solve_problem_10872;
  problems_[10950] = solve_problem_10950;
  problems_[10952] = solve_problem_10952;
  problems_[10984] = solve_problem_10984;
  problems_[11098] = solve_problem_11098;
}

void ProblemManager::run() {
  std::cout << "=== Solved.ac 문제 해결 프로젝트 ===" << std::endl;
  std::cout << "문제 번호를 입력하세요 : ";

  std::string problem_number;
  std::getline(std::cin, problem_number);

  if (!problem_number.empty()) {
    int problem_num = std::stoi(problem_number);
    solve_problem(problem_num);
  } else {
    std::cout << "문제 번호가 입력되지 않았습니다." << std::endl;
  }
}

void ProblemManager::solve_problem(int number) {
  auto it = problems_.find(number);
  if (it != problems_.end()) {
    std::cout << "문제 " << number << "을(를) 해결하겠습니다." << std::endl;
    it->second();  // 문제 해결 함수 호출
  } else {
    std::cout << "문제 " << number << "은(는) 아직 구현되지 않았습니다."
              << std::endl;
  }
}
