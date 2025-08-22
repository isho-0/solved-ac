#include "hello.hpp"
#include <iostream>

namespace hello {
    void sayHello() {
        std::cout << "안녕하세요! solved.ac 문제를 해결해보겠습니다." << std::endl;
        std::cout << "문제 해결을 위한 기본 템플릿이 준비되었습니다." << std::endl;
    }
    
    void printResult(int problemNumber, const std::string& result) {
        std::cout << "=== 문제 " << problemNumber << " 해결 결과 ===" << std::endl;
        std::cout << "결과: " << result << std::endl;
        std::cout << "================================" << std::endl;
    }
}
