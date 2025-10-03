#include "problem_33046.h"
#include <iostream>

void solve_problem_33046() {
    std::cout << "=== 33046번 Alea lacta Est 문제 해결 ===" << std::endl;
    int A, B, C, D;
    std::cin >> A >> B >> C >> D;

    int S1 = A + B;
    int S2 = C + D;

    int G = (1 + S1 - 1) % 4;
    if (G == 0) G = 4;

    int J = (G + S2 - 1) % 4;
    if (J == 0) J = 4;

    std::cout << J << "\n";

    std::cout << "================================" << std::endl;
}