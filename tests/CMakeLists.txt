# Google Test 찾기
find_package(GTest REQUIRED)

# 테스트 소스 파일들
set(TEST_SOURCES
    solved_test.cpp
    main.cpp
)

# 테스트 실행 파일 생성
add_executable(unit_tests ${TEST_SOURCES})

# 헤더 파일 경로 설정
target_include_directories(unit_tests PRIVATE 
    ${CMAKE_CURRENT_SOURCE_DIR}/../src
)

# Google Test 링크
target_link_libraries(unit_tests PRIVATE GTest::gtest GTest::gtest_main)

# C++ 표준 설정
target_compile_features(unit_tests PRIVATE cxx_std_17)

# 테스트 추가
add_test(NAME UnitTests COMMAND unit_tests)
