#include "solved.hpp"
#include <iostream>

namespace solved {
    void showWelcomeMessage() {
        std::cout << "안녕하세요! solved.ac 문제를 해결해보겠습니다." << std::endl;
        std::cout << "문제 해결을 위한 기본 템플릿이 준비되었습니다." << std::endl;
    }
    
    void printResult(int problemNumber, const std::string& result) {
        std::cout << "=== 문제 " << problemNumber << " 해결 결과 ===" << std::endl;
        std::cout << "결과: " << result << std::endl;
        std::cout << "================================" << std::endl;
    }
    
    void solveNPrint(int N) {
        std::cout << "=== 2741번 N 찍기 문제 해결 ===" << std::endl;
        std::cout << "입력: " << N << std::endl;
        std::cout << "출력:" << std::endl;
        
        // 1부터 N까지 한 줄에 하나씩 출력
        for (int i = 1; i <= N; i++) {
            std::cout << i << std::endl;
        }
        
        std::cout << "================================" << std::endl;
    }
    
    void solveAB(int A, int B) {
        std::cout << "=== 1001번 A-B 문제 해결 ===" << std::endl;
        std::cout << "입력: A=" << A << ", B=" << B << std::endl;
        std::cout << "출력: " << std::endl;
        
        // A-B 계산 및 출력
        std::cout << A - B << std::endl;
        
        std::cout << "================================" << std::endl;
    }
}
