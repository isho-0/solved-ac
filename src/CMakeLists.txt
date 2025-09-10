cmake_minimum_required(VERSION 3.16)
project(solved-ac)

# 소스 파일들을 자동으로 찾기
file(GLOB PROBLEM_SOURCES "problems/problem_*.cc")
file(GLOB PROBLEM_HEADERS "problems/problem_*.h")

# 자동으로 problem_includes.h 파일 생성
set(PROBLEM_INCLUDES_FILE "${CMAKE_CURRENT_SOURCE_DIR}/problem_includes.h")

# 문제 헤더 파일들로부터 include 문 생성
set(PROBLEM_INCLUDES "")
foreach(HEADER ${PROBLEM_HEADERS})
    get_filename_component(HEADER_NAME ${HEADER} NAME)
    set(PROBLEM_INCLUDES "${PROBLEM_INCLUDES}#include \"problems/${HEADER_NAME}\"\n")
endforeach()

# 템플릿 파일에서 problem_includes.h 생성
configure_file(
    "${CMAKE_CURRENT_SOURCE_DIR}/problem_includes.h.in"
    "${PROBLEM_INCLUDES_FILE}"
    @ONLY
)

# 기본 소스 파일들
set(BASE_SOURCES
    main.cc
    problem_manager.cc
)

# 기본 헤더 파일들
set(BASE_HEADERS
    problem_manager.h
    problem_includes.h
)

# 모든 소스와 헤더 파일 합치기
set(SOURCES ${BASE_SOURCES} ${PROBLEM_SOURCES})
set(HEADERS ${BASE_HEADERS} ${PROBLEM_HEADERS})

# 실행 파일 생성
add_executable(solved-ac ${SOURCES})
target_sources(solved-ac PRIVATE ${HEADERS})

# CLion을 위한 타겟 설정
set_target_properties(solved-ac PROPERTIES
    OUTPUT_NAME "solved-ac"
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/src"
)

# 헤더 파일 경로 설정
target_include_directories(solved-ac PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

# C++ 표준 설정
target_compile_features(solved-ac PRIVATE cxx_std_17)

# IDE 설정 (Visual Studio Code, CLion 등)
set_property(TARGET solved-ac PROPERTY FOLDER "Executables")

# 디버그 정보 포함
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS_DEBUG "-g -O0")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")
