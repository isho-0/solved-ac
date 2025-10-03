#include "problem_27434.h"
#include <iostream>
#include <vector>
#include <complex>
#include <cmath>

using cd = std::complex<double>;
const double PI = acos(-1);

static void fft(std::vector<cd>& a, bool invert) {
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
            cd w(1.0, 0.0);
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

static std::vector<int> multiply(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<cd> fa(a.begin(), a.end()), fb(b.begin(), b.end());
    int n = 1;
    while (n < (int)a.size() + (int)b.size()) n <<= 1;
    fa.resize(n); fb.resize(n);
    fft(fa, false); fft(fb, false);
    for (int i = 0; i < n; i++) fa[i] *= fb[i];
    fft(fa, true);
    std::vector<int> res(n);
    long long carry = 0;
    for (int i = 0; i < n; i++) {
        long long t = (long long)(fa[i].real() + 0.5) + carry;
        res[i] = t % 10;
        carry = t / 10;
    }
    while (carry) {
        res.push_back(carry % 10);
        carry /= 10;
    }
    while (res.size() > 1 && res.back() == 0) res.pop_back();
    return res;
}

std::vector<int> factorial(int l, int r) {
    if (l > r) return {1};
    if (l == r) {
        if (l == 0) return {1}; // 0! = 1
        int x = l;
        std::vector<int> res;
        while (x > 0) {
            res.push_back(x % 10);
            x /= 10;
        }
        return res;
    }
    int mid = (l + r) / 2;
    return multiply(factorial(l, mid), factorial(mid + 1, r));
}

void solve_problem_27434() {
    std::cout << "=== 27434번 팩토리얼 3 문제 해결 ===" << std::endl;

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    std::vector<int> ans = factorial(1, n);
    for (int i = ans.size() - 1; i >= 0; i--) std::cout << ans[i];
    std::cout << "\n";

    std::cout << "================================" << std::endl;
}
