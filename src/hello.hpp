#ifndef HELLO_HPP
#define HELLO_HPP

#include <string>

namespace hello {
    /**
     * @brief 간단한 인사말을 출력하는 함수
     * 
     * 이 함수는 solved.ac 문제 해결을 위한 기본 템플릿 함수입니다.
     * 각 문제별로 이 함수를 수정하여 사용할 수 있습니다.
     */
    void sayHello();
    
    /**
     * @brief 문제 해결 결과를 출력하는 함수
     * 
     * @param problemNumber 문제 번호
     * @param result 결과 문자열
     */
    void printResult(int problemNumber, const std::string& result);
}

#endif // HELLO_HPP
