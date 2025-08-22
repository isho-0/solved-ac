#include <gtest/gtest.h>
#include "hello.hpp"
#include <sstream>

// 테스트를 위한 출력 캡처 클래스
class HelloTest : public ::testing::Test {
protected:
    std::stringstream buffer;
    std::streambuf* old_cout;
    
    void SetUp() override {
        old_cout = std::cout.rdbuf();
        std::cout.rdbuf(buffer.rdbuf());
    }
    
    void TearDown() override {
        std::cout.rdbuf(old_cout);
    }
};

TEST_F(HelloTest, SayHelloOutputsCorrectMessage) {
    hello::sayHello();
    
    std::string output = buffer.str();
    EXPECT_NE(output.find("안녕하세요!"), std::string::npos);
    EXPECT_NE(output.find("solved.ac"), std::string::npos);
    EXPECT_NE(output.find("문제를 해결해보겠습니다"), std::string::npos);
}

TEST_F(HelloTest, PrintResultOutputsCorrectFormat) {
    int problemNumber = 1000;
    std::string result = "테스트 결과";
    
    hello::printResult(problemNumber, result);
    
    std::string output = buffer.str();
    EXPECT_NE(output.find("문제 1000"), std::string::npos);
    EXPECT_NE(output.find("테스트 결과"), std::string::npos);
    EXPECT_NE(output.find("해결 결과"), std::string::npos);
}

TEST_F(HelloTest, PrintResultWithDifferentProblemNumber) {
    int problemNumber = 2557;
    std::string result = "Hello World";
    
    hello::printResult(problemNumber, result);
    
    std::string output = buffer.str();
    EXPECT_NE(output.find("문제 2557"), std::string::npos);
    EXPECT_NE(output.find("Hello World"), std::string::npos);
}
