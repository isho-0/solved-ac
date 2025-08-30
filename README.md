# 🌊 Solved.ac 문제 해결 프로젝트

![Language](https://img.shields.io/badge/language-C++-blue?logo=c%2B%2B)
![Build](https://img.shields.io/badge/build-CMake-orange?logo=cmake)
![Testing](https://img.shields.io/badge/testing-GoogleTest-green?logo=google)
![Progress](https://img.shields.io/badge/status-solving-informational)

> solved.ac의 알고리즘 문제들을 하나씩 해결하며 실력을 쌓아가는 공간  
> 꾸준함은 파도를 만든다. 오늘도 한 문제 한 문제, 알고리즘 실력을 향상시킨다.

---

## 🧭 개요

이 저장소는 [**solved.ac**](https://solved.ac) 코딩 문제 해결사이트의 문제들을 체계적으로 해결하고 기록하는 C++ 프로젝트입니다.  
알고리즘 문제 풀이 능력을 향상시키고, 다양한 풀이 방법을 탐색하며, Git을 통해 성장 과정을 기록합니다.

---

## ⚙️ 환경

- **언어**: C++17
- **빌드 시스템**: CMake 3.16+
- **버전 관리**: Git & GitHub
- **운영체제**: Windows / macOS / Linux (크로스 플랫폼)

---

## 🗂️ 프로젝트 구조

<pre>
solved-ac/
├── CMakeLists.txt          # 프로젝트 루트 CMake 설정
├── src/                    # 소스 코드
│   ├── CMakeLists.txt      # 소스 코드 빌드 설정
│   ├── main.cc            # 메인 실행 파일 (간소화됨)
│   ├── problem_manager.h/.cc # 문제 관리자 클래스
│   └── problems/           # 문제별 개별 파일들
│       ├── problem_1000.h/.cc
│       ├── problem_1001.h/.cc
│       ├── problem_2438.h/.cc
│       ├── problem_2439.h/.cc
│       ├── problem_2440.h/.cc
│       ├── problem_2441.h/.cc
│       ├── problem_2442.h/.cc
│       ├── problem_2443.h/.cc
│       ├── problem_2739.h/.cc
│       ├── problem_2741.h/.cc
│       ├── problem_2742.h/.cc
│       ├── problem_8393.h/.cc
│       ├── problem_10950.h/.cc
│       └── problem_10952.h/.cc
├── build/                  # 빌드 출력 디렉토리
├── .github/                # GitHub 관련 설정
├── .gitignore             # Git 무시 파일 목록
├── .clang-format          # 코드 포맷팅 설정
├── vcpkg.json             # vcpkg 의존성 설정
├── LICENSE                # MIT 라이선스
├── CODE_OF_CONDUCT.md     # 행동 강령
└── README.md              # 프로젝트 설명서
</pre>

---

## 📌 학습 목표

- solved.ac 문제들을 체계적으로 해결하며 알고리즘 실력 향상
- 다양한 문제 풀이 방법과 최적화 기법 탐색
- C++17의 모던한 기능들을 활용한 효율적인 코드 작성
- CMake를 활용한 실전 개발 환경 경험
- Git으로 버전 관리하며 성장 로그 남기기

## 🔧 리팩토링 완료

프로젝트가 **모듈화된 구조**로 리팩토링되었습니다:

### ✅ 개선 사항

- **main.cc 간소화**: 178줄 → 7줄로 대폭 단축
- **문제별 파일 분리**: 각 문제가 독립적인 `.h/.cc` 파일로 분리
- **ProblemManager 도입**: 문제들을 중앙에서 관리하는 시스템
- **확장성 향상**: 새 문제 추가가 매우 간단해짐
- **유지보수성 개선**: 각 문제가 독립적이라 수정이 용이함

### 🏗️ 새로운 아키텍처

- **단일 책임 원칙**: 각 파일이 하나의 문제만 담당
- **개방-폐쇄 원칙**: 새 문제 추가 시 기존 코드 수정 불필요
- **의존성 역전**: ProblemManager가 문제들을 추상화하여 관리

---

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
```

---

## 🌊 Commit Convention (커밋 규칙)

| 유형         | 설명                |
|------------|-------------------|
| `feat`     | 새로운 문제 풀이 추가      |
| `docs`     | 문서 수정 또는 주석 추가    |
| `refactor` | 기존 코드 개선 또는 리팩토링  |
| `perf`     | 성능 개선             |
| `fix`      | 버그 수정 또는 로직 수정    |
| `chore`    | 설정 파일, 빌드 설정 등 변경 |

**예시**:

```bash
git commit -m "feat: solved.ac 1000번 문제 풀이 완료"
git commit -m "docs: README.md 프로젝트 구조 업데이트"
git commit -m "refactor: 모듈화된 구조로 리팩토링 완료"
git commit -m "fix: 2438번 문제 출력 형식 수정"
```

---

## 📝 사용법

### 새로운 문제 추가하기

1. **문제 파일 생성**: `src/problems/` 디렉토리에 `problem_XXXX.h`와 `problem_XXXX.cc` 파일 생성
2. **함수 구현**: `solve_problem_XXXX()` 함수를 구현
3. **ProblemManager에 등록**: `src/problem_manager.cc`에서 문제 번호와 함수를 등록

**예시**:

```cpp
// src/problems/problem_2557.h
#ifndef PROBLEM_2557_H
#define PROBLEM_2557_H
void solve_problem_2557();
#endif

// src/problems/problem_2557.cc
#include "problem_2557.h"
#include <iostream>

void solve_problem_2557() {
    std::cout << "=== 2557번 Hello World 문제 해결 ===" << std::endl;
    std::cout << "Hello World!" << std::endl;
    std::cout << "================================" << std::endl;
}
```

### 프로그램 실행

1. **빌드**: `mkdir build && cd build && cmake .. && make`
2. **실행**: `./src/solved-ac`
3. **문제 번호 입력**: 원하는 문제 번호를 입력하면 해당 문제가 실행됩니다

---

## ✨ 라이선스

이 프로젝트는 MIT 라이선스 하에 배포됩니다. 자세한 내용은 [LICENSE](LICENSE) 파일을 참조하세요.

---

**Made with ❤️ by isho-0.**  
*Let's ride the wave of algorithms, one problem at a time.*

---

## 🙋‍♂️ About Me

- GitHub: [@isho-0](https://github.com/isho-0)
- **solved.ac**: [프로필 링크 추가 예정]

---

## 📞 연락처

프로젝트에 대한 질문이나 제안사항이 있으시면 이슈를 생성해 주세요.

---

**Happy Coding! 🎉**

