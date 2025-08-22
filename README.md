# Solved.ac 문제 해결 프로젝트

이 프로젝트는 [solved.ac](https://solved.ac) 코딩 문제 해결사이트의 문제들을 해결하고 기록하는 C++ 프로젝트입니다.

## 🚀 프로젝트 구조

```
solved-ac/
├── CMakeLists.txt          # 프로젝트 루트 CMake 설정
├── src/                    # 소스 코드
│   ├── CMakeLists.txt      # 소스 코드 빌드 설정
│   ├── main.cpp           # 메인 실행 파일
│   ├── hello.hpp          # 헤더 파일
│   └── hello.cpp          # 구현 파일
├── tests/                  # 테스트 코드
│   ├── CMakeLists.txt      # 테스트 빌드 설정
│   ├── main.cpp           # 테스트 메인 파일
│   └── hello_test.cpp     # 단위 테스트
├── build/                  # 빌드 출력 디렉토리
├── .github/                # GitHub 관련 설정
├── .gitignore             # Git 무시 파일 목록
├── .clang-format          # 코드 포맷팅 설정
├── vcpkg.json             # vcpkg 의존성 설정
├── LICENSE                # MIT 라이선스
├── CODE_OF_CONDUCT.md     # 행동 강령
└── README.md              # 프로젝트 설명서
```

## 📋 요구사항

- CMake 3.16 이상
- C++17 호환 컴파일러
- vcpkg (Google Test 의존성용)

## 🛠️ 빌드 방법

### 1. 의존성 설치

```bash
# vcpkg 설치 (macOS)
git clone https://github.com/Microsoft/vcpkg.git
cd vcpkg
./bootstrap-vcpkg.sh
./vcpkg integrate install

# Google Test 설치
./vcpkg install gtest
```

### 2. 프로젝트 빌드

```bash
# 빌드 디렉토리 생성
mkdir build && cd build

# CMake 설정
cmake ..

# 빌드
make

# 또는
cmake --build .
```

### 3. 실행

```bash
# 메인 프로그램 실행
./src/solved-ac

# 테스트 실행
./tests/unit_tests
```

## 🧪 테스트

프로젝트는 Google Test를 사용하여 단위 테스트를 포함하고 있습니다.

```bash
cd build
make test
```

## 📝 사용법

1. `src/hello.hpp`와 `src/hello.cpp`를 수정하여 새로운 문제 해결 함수를 추가
2. `src/main.cpp`에서 문제 번호 입력 처리 로직 구현
3. `tests/` 디렉토리에 새로운 테스트 케이스 추가

## 🤝 기여하기

1. 이 저장소를 포크합니다
2. 새로운 기능 브랜치를 생성합니다 (`git checkout -b feature/amazing-feature`)
3. 변경사항을 커밋합니다 (`git commit -m 'Add some amazing feature'`)
4. 브랜치에 푸시합니다 (`git push origin feature/amazing-feature`)
5. Pull Request를 생성합니다

## 📄 라이선스

이 프로젝트는 MIT 라이선스 하에 배포됩니다. 자세한 내용은 [LICENSE](LICENSE) 파일을 참조하세요.

## 📞 연락처

프로젝트에 대한 질문이나 제안사항이 있으시면 이슈를 생성해 주세요.

---

**Happy Coding! 🎉**

