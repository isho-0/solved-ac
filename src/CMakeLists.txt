# 소스 파일들
set(SOURCES
    main.cc
    problem_manager.cc
    problems/problem_1000.cc
    problems/problem_1001.cc
    problems/problem_2438.cc
    problems/problem_2439.cc
    problems/problem_2440.cc
    problems/problem_2441.cc
    problems/problem_2442.cc
    problems/problem_2443.cc
    problems/problem_2444.cc
    problems/problem_2739.cc
    problems/problem_2741.cc
    problems/problem_2742.cc
    problems/problem_8393.cc
    problems/problem_10950.cc
    problems/problem_10952.cc
)

# 헤더 파일들
set(HEADERS
    problem_manager.h
    problems/problem_1000.h
    problems/problem_1001.h
    problems/problem_2438.h
    problems/problem_2439.h
    problems/problem_2440.h
    problems/problem_2441.h
    problems/problem_2442.h
    problems/problem_2443.h
    problems/problem_2444.h
    problems/problem_2739.h
    problems/problem_2741.h
    problems/problem_2742.h
    problems/problem_8393.h
    problems/problem_10950.h
    problems/problem_10952.h
)

# 실행 파일 생성
add_executable(solved-ac ${SOURCES} ${HEADERS})

# 헤더 파일 경로 설정
target_include_directories(solved-ac PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

# C++ 표준 설정
target_compile_features(solved-ac PRIVATE cxx_std_17)
