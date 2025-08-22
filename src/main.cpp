#include <iostream>
#include <string>
#include "solved.hpp"

int main() {
    std::cout << "=== Solved.ac 문제 해결 프로젝트 ===" << std::endl;
    std::cout << "문제 번호를 입력하세요: ";
    
    std::string problemNumber;
    std::getline(std::cin, problemNumber);
    
    if (!problemNumber.empty()) {
        int problemNum = std::stoi(problemNumber);
        std::cout << "문제 " << problemNum << "을(를) 해결하겠습니다." << std::endl;
        
        // 문제별 해결 함수 호출
        switch (problemNum) {
            case 2741:
                std::cout << "N을 입력하세요: ";
                int N;
                std::cin >> N;
                solved::solveNPrint(N);
                break;
            default:
                solved::showWelcomeMessage();
                break;
        }
    } else {
        std::cout << "문제 번호가 입력되지 않았습니다." << std::endl;
    }
    
    return 0;
}
