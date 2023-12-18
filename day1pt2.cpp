#include <algorithm>
#include <string>
#include <vector>
#include <iostream>
#include <numeric>
#include <cmath>
#include <set>
#include <queue>
#include <bitset>
#include <fstream>
#include <map>

using i32 = int32_t;
using ll = long long;
using point = std::pair<ll, ll>;

int main() {
    std::string a;
    int running_sum = 0;

    std::map<std::string, std::string> m {
        {"one", "o1e"},
        {"two", "t2o"},
        {"three", "t3e"},
        {"four", "f4r"},
        {"five", "f5e"},
        {"six", "s6x"},
        {"seven", "s7n"},
        {"eight", "e8t"},
        {"nine", "n9e"}
    };
    
    while (std::cin >> a) {
        std::string joined = "";
        bool is_first;
        char last;
        
        for (const auto &mpair : m) {
            size_t it = a.find(mpair.first);

            if (it != std::string::npos) {
                a.replace(it, mpair.first.length(), mpair.second);
            }
        }

        for (auto &i : a) {
            if (!is_first && std::isdigit(i)) {
                is_first = true;
                joined.push_back(i);
            }

            if (is_first && std::isdigit(i)) {
                last = i;
            }

        }

        joined.push_back(last);
        running_sum += std::stoi(joined);
        std::cout << "\n";
        std::cout << running_sum;

        is_first=false;
        joined="";
    }
}
