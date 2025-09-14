#include "problem_11098.h"
#include <iostream>
#include <vector>
#include <string>

class Scout {
public:
    int price;
    std::string name;
};

void solve_problem_11098() {
    std::cout << "=== 11098번 첼시를 도와줘! 문제 해결 ===" << std::endl;

    int n;
    std::cin >> n;

    while (n--) {
        int p;
        std::cin >> p;

        Scout most_expensive;
        most_expensive.price = -1;

        for (int i = 0; i < p; i++) {
            Scout player;
            std::cin >> player.price >> player.name;

            if (player.price > most_expensive.price) {
                most_expensive = player;
            }
        }

        std::cout << most_expensive.name << "\n";
    }

    std::cout << "================================" << std::endl;
}
