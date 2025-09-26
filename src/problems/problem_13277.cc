#include "problem_13277.h"

#include <complex>
#include <iostream>
#include <vector>

using cd = std::complex<double>;
const double PI = acos(-1);

void fft(std::vector<cd> &a, bool invert) {
    int n = a.size();
    for (int i = 1, j = 0; i < n; i++) {
        int bit = n >> 1;
        for (; j & bit; bit >>= 1) j ^= bit;
        j ^= bit;
        if (i < j) std::swap(a[i], a[j]);
    }
    for (int len = 2; len <= n; len <<= 1) {
        double ang = 2 * PI / len * (invert ? -1 : 1);
        cd wlen(cos(ang), sin(ang));
        for (int i = 0; i < n; i += len) {
            cd w(1);
            for (int j = 0; j < len / 2; j++) {
                cd u = a[i + j], v = a[i + j + len / 2] * w;
                a[i + j] = u + v;
                a[i + j + len / 2] = u - v;
                w *= wlen;
            }
        }
    }
    if (invert) {
        for (cd &x : a) x /= n;
    }
}

std::vector<int> multiply(const std::vector<int> &a, const std::vector<int> &b) {
    std::vector<cd> fa(a.begin(), a.end()), fb(b.begin(), b.end());
    int n = 1;
    while (n < (int)a.size() + (int)b.size()) n <<= 1;
    fa.resize(n); fb.resize(n);

    fft(fa, false); fft(fb, false);
    for (int i = 0; i < n; i++) fa[i] *= fb[i];
    fft(fa, true);

    std::vector<int> result(n);
    long long carry = 0;
    for (int i = 0; i < n; i++) {
        long long t = (long long)(round(fa[i].real())) + carry;
        result[i] = t % 10;
        carry = t / 10;
    }
    while (carry) {
        result.push_back(carry % 10);
        carry /= 10;
    }
    while (result.size() > 1 && result.back() == 0) result.pop_back();
    return result;
}

void solve_problem_13277() {
    std::cout << "=== 13277번 큰 수 곱셈 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string A, B;
    std::cin >> A >> B;

    std::vector<int> a, b;
    for (int i = A.size() - 1; i >= 0; i--) a.push_back(A[i] - '0');
    for (int i = B.size() - 1; i >= 0; i--) b.push_back(B[i] - '0');

    std::vector<int> res = multiply(a, b);

    for (int i = res.size() - 1; i >= 0; i--) std::cout << res[i];
    std::cout << "\n";



    std::cout << "================================" << std::endl;
}
