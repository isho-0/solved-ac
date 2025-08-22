#include <iostream>
#include <string>
#include "hello.hpp"

int main() {
    std::cout << "=== Solved.ac 문제 해결 프로젝트 ===" << std::endl;
    std::cout << "문제 번호를 입력하세요: ";
    
    std::string problemNumber;
    std::getline(std::cin, problemNumber);
    
    if (!problemNumber.empty()) {
        std::cout << "문제 " << problemNumber << "을(를) 해결하겠습니다." << std::endl;
        hello::sayHello();
    } else {
        std::cout << "문제 번호가 입력되지 않았습니다." << std::endl;
    }
    
    return 0;
}
