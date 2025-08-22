#ifndef SOLVED_HPP
#define SOLVED_HPP

#include <string>

namespace solved {
    /**
     * @brief solved.ac 문제 해결 시작 메시지를 출력하는 함수
     * 
     * 이 함수는 solved.ac 문제 해결을 위한 기본 템플릿 함수입니다.
     * 각 문제별로 이 함수를 수정하여 사용할 수 있습니다.
     */
    void showWelcomeMessage();
    
    /**
     * @brief 문제 해결 결과를 출력하는 함수
     * 
     * @param problemNumber 문제 번호
     * @param result 결과 문자열
     */
    void printResult(int problemNumber, const std::string& result);
    
    /**
     * @brief 2741번 N 찍기 문제 해결 함수
     * 
     * 자연수 N이 주어졌을 때, 1부터 N까지 한 줄에 하나씩 출력
     * @param N 입력받은 자연수 (1 ≤ N ≤ 100,000)
     */
    void solveNPrint(int N);
    
    /**
     * @brief 1001번 A-B 문제 해결 함수
     * 
     * 두 정수 A와 B를 입력받아 A-B를 출력합니다.
     * @param A 첫 번째 정수 (0 < A < 10)
     * @param B 두 번째 정수 (0 < B < 10)
     */
    void solveAB(int A, int B);
}

#endif // SOLVED_HPP
