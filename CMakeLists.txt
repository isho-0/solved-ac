cmake_minimum_required(VERSION 3.16)
project(solved-ac VERSION 1.0.0 LANGUAGES CXX)

# C++ 표준 설정
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 컴파일러 플래그 설정
if(MSVC)
    add_compile_options(/W4)
else()
    add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# 빌드 타입 설정
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()

# 서브디렉토리 추가
add_subdirectory(src)

# Google Test가 있을 때만 테스트 빌드
find_package(GTest QUIET)
if(GTest_FOUND)
    add_subdirectory(tests)
    message(STATUS "Google Test found - tests will be built")
else()
    message(STATUS "Google Test not found - skipping tests")
endif()

# vcpkg 패키지 매니저 설정
if(DEFINED ENV{VCPKG_ROOT})
    set(CMAKE_TOOLCHAIN_FILE "$ENV{VCPKG_ROOT}/scripts/buildsystems/vcpkg.cmake"
        CACHE STRING "")
endif()
