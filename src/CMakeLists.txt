# 소스 파일들
set(SOURCES
    main.cc
    solved.cc
)

# 헤더 파일들
set(HEADERS
    solved.h
)

# 실행 파일 생성
add_executable(solved-ac ${SOURCES} ${HEADERS})

# 헤더 파일 경로 설정
target_include_directories(solved-ac PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

# C++ 표준 설정
target_compile_features(solved-ac PRIVATE cxx_std_17)
