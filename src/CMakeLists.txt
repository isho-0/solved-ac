# 소스 파일들을 자동으로 찾기
file(GLOB PROBLEM_SOURCES "problems/problem_*.cc")
file(GLOB PROBLEM_HEADERS "problems/problem_*.h")

# 기본 소스 파일들
set(BASE_SOURCES
    main.cc
    problem_manager.cc
)

# 기본 헤더 파일들
set(BASE_HEADERS
    problem_manager.h
)

# 모든 소스와 헤더 파일 합치기
set(SOURCES ${BASE_SOURCES} ${PROBLEM_SOURCES})
set(HEADERS ${BASE_HEADERS} ${PROBLEM_HEADERS})

# 실행 파일 생성
add_executable(solved-ac ${SOURCES} ${HEADERS})

# 헤더 파일 경로 설정
target_include_directories(solved-ac PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

# C++ 표준 설정
target_compile_features(solved-ac PRIVATE cxx_std_17)
