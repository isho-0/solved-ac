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
- **테스트 프레임워크**: Google Test
- **버전 관리**: Git & GitHub
- **운영체제**: Windows / macOS / Linux (크로스 플랫폼)

---

## 🗂️ 프로젝트 구조

<pre>
solved-ac/
├── CMakeLists.txt          # 프로젝트 루트 CMake 설정
├── src/                    # 소스 코드
│   ├── CMakeLists.txt      # 소스 코드 빌드 설정
│   ├── main.cc            # 메인 실행 파일
│   ├── solved.h            # 헤더 파일
│   └── solved.cc           # 구현 파일
├── tests/                  # 테스트 코드
│   ├── CMakeLists.txt      # 테스트 빌드 설정
│   ├── main.cc            # 테스트 메인 파일
│   └── solved_test.cc      # 단위 테스트
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
- CMake와 Google Test를 활용한 실전 개발 환경 경험
- Git으로 버전 관리하며 성장 로그 남기기

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

# 테스트 실행
./tests/unit_tests
```

---

## 🧪 테스트

프로젝트는 Google Test를 사용하여 단위 테스트를 포함하고 있습니다.

```bash
cd build
make test
```

---

## 🌊 Commit Convention (커밋 규칙)

| 유형 | 설명 |
|------|------|
| `feat` | 새로운 문제 풀이 추가 |
| `docs` | 문서 수정 또는 주석 추가 |
| `refactor` | 기존 코드 개선 |
| `fix` | 버그 수정 또는 로직 수정 |
| `test` | 테스트 케이스 추가 또는 수정 |
| `chore` | 설정 파일, 빌드 설정 등 변경 |

**예시**:

```bash
git commit -m "feat: solved.ac 1000번 문제 풀이 완료"
git commit -m "docs: 2557번 문제 풀이 방법 주석 추가"
git commit -m "refactor: 알고리즘 최적화 적용"
```

---

## 📖 문제 해결 현황

| 문제 번호 | 제목 | 난이도 | 상태 | 풀이 방법 |
|-----------|------|--------|------|-----------|
| 1001 | A-B | 🟢 Bronze V | ✅ 완료 | 기본 입출력 |
| 2741 | N 찍기 | 🟢 Bronze V | ✅ 완료 | 반복문, 기본 입출력 |
| ... | ... | ... | ... | ... |

**상태 표시**:
- ✅ 완료
- 🔄 진행중
- ⏳ 계획중

---

## 📝 사용법

1. **새로운 문제 추가**: `src/solved.h`와 `src/solved.cc`를 수정하여 새로운 문제 해결 함수를 추가
2. **문제 해결 로직**: `src/main.cc`에서 문제 번호 입력 처리 로직 구현
3. **테스트 케이스**: `tests/` 디렉토리에 새로운 테스트 케이스 추가
4. **문서화**: 각 문제별 풀이 방법과 알고리즘 설명 주석 추가

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

