#include "problem_manager.h"
#include "problem_includes.h"
#include <iostream>
#include <string>
#ifdef _WIN32
#include <windows.h> // 윈도우 콘솔 출력 UTF-8 전환
#endif

ProblemManager::ProblemManager() {
    // 문제 등록
    problems_[1000] = solve_problem_1000;
    problems_[1001] = solve_problem_1001;
    problems_[1008] = solve_problem_1008;
    problems_[1009] = solve_problem_1009;
    problems_[1037] = solve_problem_1037;
    problems_[1152] = solve_problem_1152;
    problems_[1157] = solve_problem_1157;
    problems_[1181] = solve_problem_1181;
    problems_[1259] = solve_problem_1259;
    problems_[1284] = solve_problem_1284;
    problems_[1297] = solve_problem_1297;
    problems_[1292] = solve_problem_1292;
    problems_[1330] = solve_problem_1330;
    problems_[1357] = solve_problem_1357;
    problems_[1408] = solve_problem_1408;
    problems_[1427] = solve_problem_1427;
    problems_[1436] = solve_problem_1436;
    problems_[1546] = solve_problem_1546;
    problems_[1676] = solve_problem_1676;
    problems_[1920] = solve_problem_1920;
    problems_[1924] = solve_problem_1924;
    problems_[1977] = solve_problem_1977;
    problems_[1978] = solve_problem_1978;
    problems_[2010] = solve_problem_2010;
    problems_[2108] = solve_problem_2108;
    problems_[2164] = solve_problem_2164;
    problems_[2231] = solve_problem_2231;
    problems_[2292] = solve_problem_2292;
    problems_[2309] = solve_problem_2309;
    problems_[2420] = solve_problem_2420;
    problems_[2438] = solve_problem_2438;
    problems_[2439] = solve_problem_2439;
    problems_[2440] = solve_problem_2440;
    problems_[2441] = solve_problem_2441;
    problems_[2442] = solve_problem_2442;
    problems_[2443] = solve_problem_2443;
    problems_[2444] = solve_problem_2444;
    problems_[2445] = solve_problem_2445;
    problems_[2446] = solve_problem_2446;
    problems_[2455] = solve_problem_2455;
    problems_[2460] = solve_problem_2460;
    problems_[2475] = solve_problem_2475;
    problems_[2490] = solve_problem_2490;
    problems_[2501] = solve_problem_2501;
    problems_[2506] = solve_problem_2506;
    problems_[2522] = solve_problem_2522;
    problems_[2523] = solve_problem_2523;
    problems_[2557] = solve_problem_2557;
    problems_[2562] = solve_problem_2562;
    problems_[2576] = solve_problem_2576;
    problems_[2577] = solve_problem_2577;
    problems_[2581] = solve_problem_2581;
    problems_[2587] = solve_problem_2587;
    problems_[2592] = solve_problem_2592;
    problems_[2609] = solve_problem_2609;
    problems_[2675] = solve_problem_2675;
    problems_[2693] = solve_problem_2693;
    problems_[2702] = solve_problem_2702;
    problems_[2711] = solve_problem_2711;
    problems_[2720] = solve_problem_2720;
    problems_[2738] = solve_problem_2738;
    problems_[2739] = solve_problem_2739;
    problems_[2741] = solve_problem_2741;
    problems_[2742] = solve_problem_2742;
    problems_[2743] = solve_problem_2743;
    problems_[2744] = solve_problem_2744;
    problems_[2748] = solve_problem_2748;
    problems_[2750] = solve_problem_2750;
    problems_[2751] = solve_problem_2751;
    problems_[2752] = solve_problem_2752;
    problems_[2753] = solve_problem_2753;
    problems_[2754] = solve_problem_2754;
    problems_[2775] = solve_problem_2775;
    problems_[2798] = solve_problem_2798;
    problems_[2822] = solve_problem_2822;
    problems_[2839] = solve_problem_2839;
    problems_[2869] = solve_problem_2869;
    problems_[2884] = solve_problem_2884;
    problems_[2902] = solve_problem_2902;
    problems_[2908] = solve_problem_2908;
    problems_[2920] = solve_problem_2920;
    problems_[2921] = solve_problem_2921;
    problems_[2948] = solve_problem_2948;
    problems_[2953] = solve_problem_2953;
    problems_[3040] = solve_problem_3040;
    problems_[3052] = solve_problem_3052;
    problems_[3058] = solve_problem_3058;
    problems_[3460] = solve_problem_3460;
    problems_[4153] = solve_problem_4153;
    problems_[4458] = solve_problem_4458;
    problems_[4949] = solve_problem_4949;
    problems_[5054] = solve_problem_5054;
    problems_[5176] = solve_problem_5176;
    problems_[5218] = solve_problem_5218;
    problems_[5338] = solve_problem_5338;
    problems_[5522] = solve_problem_5522;
    problems_[5543] = solve_problem_5543;
    problems_[5565] = solve_problem_5565;
    problems_[5576] = solve_problem_5576;
    problems_[5597] = solve_problem_5597;
    problems_[5598] = solve_problem_5598;
    problems_[5635] = solve_problem_5635;
    problems_[5717] = solve_problem_5717;
    problems_[5800] = solve_problem_5800;
    problems_[5928] = solve_problem_5928;
    problems_[6825] = solve_problem_6825;
    problems_[7287] = solve_problem_7287;
    problems_[7568] = solve_problem_7568;
    problems_[8393] = solve_problem_8393;
    problems_[8958] = solve_problem_8958;
    problems_[9012] = solve_problem_9012;
    problems_[9076] = solve_problem_9076;
    problems_[9085] = solve_problem_9085;
    problems_[9086] = solve_problem_9086;
    problems_[9295] = solve_problem_9295;
    problems_[9325] = solve_problem_9325;
    problems_[9498] = solve_problem_9498;
    problems_[10170] = solve_problem_10170;
    problems_[10171] = solve_problem_10171;
    problems_[10172] = solve_problem_10172;
    problems_[10178] = solve_problem_10178;
    problems_[10250] = solve_problem_10250;
    problems_[10569] = solve_problem_10569;
    problems_[10699] = solve_problem_10699;
    problems_[10718] = solve_problem_10718;
    problems_[10773] = solve_problem_10773;
    problems_[10797] = solve_problem_10797;
    problems_[10807] = solve_problem_10807;
    problems_[10808] = solve_problem_10808;
    problems_[10809] = solve_problem_10809;
    problems_[10814] = solve_problem_10814;
    problems_[10816] = solve_problem_10816;
    problems_[10818] = solve_problem_10818;
    problems_[10821] = solve_problem_10821;
    problems_[10828] = solve_problem_10828;
    problems_[10833] = solve_problem_10833;
    problems_[10869] = solve_problem_10869;
    problems_[10870] = solve_problem_10870;
    problems_[10871] = solve_problem_10871;
    problems_[10872] = solve_problem_10872;
    problems_[10926] = solve_problem_10926;
    problems_[10950] = solve_problem_10950;
    problems_[10951] = solve_problem_10951;
    problems_[10952] = solve_problem_10952;
    problems_[10953] = solve_problem_10953;
    problems_[10984] = solve_problem_10984;
    problems_[10987] = solve_problem_10987;
    problems_[10989] = solve_problem_10989;
    problems_[10991] = solve_problem_10991;
    problems_[10992] = solve_problem_10992;
    problems_[10995] = solve_problem_10995;
    problems_[10998] = solve_problem_10998;
    problems_[11021] = solve_problem_11021;
    problems_[11047] = solve_problem_11047;
    problems_[11050] = solve_problem_11050;
    problems_[11098] = solve_problem_11098;
    problems_[11170] = solve_problem_11170;
    problems_[11365] = solve_problem_11365;
    problems_[11382] = solve_problem_11382;
    problems_[11650] = solve_problem_11650;
    problems_[11651] = solve_problem_11651;
    problems_[11654] = solve_problem_11654;
    problems_[11655] = solve_problem_11655;
    problems_[11718] = solve_problem_11718;
    problems_[11719] = solve_problem_11719;
    problems_[11720] = solve_problem_11720;
    problems_[11721] = solve_problem_11721;
    problems_[11942] = solve_problem_11942;
    problems_[11944] = solve_problem_11944;
    problems_[13277] = solve_problem_13277;
    problems_[14593] = solve_problem_14593;
    problems_[14626] = solve_problem_14626;
    problems_[14645] = solve_problem_14645;
    problems_[14681] = solve_problem_14681;
    problems_[15552] = solve_problem_15552;
    problems_[15667] = solve_problem_15667;
    problems_[15829] = solve_problem_15829;
    problems_[15873] = solve_problem_15873;
    problems_[15964] = solve_problem_15964;
    problems_[16430] = solve_problem_16430;
    problems_[16693] = solve_problem_16693;
    problems_[17826] = solve_problem_17826;
    problems_[17869] = solve_problem_17869;
    problems_[18110] = solve_problem_18110;
    problems_[21553] = solve_problem_21553;
    problems_[23756] = solve_problem_23756;
    problems_[23808] = solve_problem_23808;
    problems_[24267] = solve_problem_24267;
    problems_[24568] = solve_problem_24568;
    problems_[24883] = solve_problem_24883;
    problems_[25083] = solve_problem_25083;
    problems_[25311] = solve_problem_25311;
    problems_[27323] = solve_problem_27323;
    problems_[27389] = solve_problem_27389;
    problems_[27433] = solve_problem_27433;
    problems_[27434] = solve_problem_27434;
    problems_[27866] = solve_problem_27866;
    problems_[28444] = solve_problem_28444;
    problems_[28702] = solve_problem_28702;
    problems_[29863] = solve_problem_29863;
    problems_[30224] = solve_problem_30224;
    problems_[30802] = solve_problem_30802;
    problems_[31403] = solve_problem_31403;
    problems_[31962] = solve_problem_31962;
    problems_[32384] = solve_problem_32384;
    problems_[33046] = solve_problem_33046;
    problems_[33178] = solve_problem_33178;
}

void ProblemManager::run() {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8); // Windows 전용
#endif

    std::cout << "=== Solved.ac 문제 해결 프로젝트 ===" << std::endl;
    std::cout << "문제 번호를 입력하세요 : ";

    std::string problem_number;
    std::getline(std::cin, problem_number);

    if (!problem_number.empty()) {
        int problem_num = std::stoi(problem_number);
        solve_problem(problem_num);
    } else {
        std::cout << "문제 번호가 입력되지 않았습니다." << std::endl;
    }
}

void ProblemManager::solve_problem(int number) {
    auto it = problems_.find(number);
    if (it != problems_.end()) {
        std::cout << "문제 " << number << "을(를) 해결하겠습니다." << std::endl;
        it->second(); // 문제 해결 함수 호출
    } else {
        std::cout << "문제 " << number << "은(는) 아직 구현되지 않았습니다."
                << std::endl;
    }
}
