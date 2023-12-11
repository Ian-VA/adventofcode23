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

using i32 = int32_t;
using ll = long long;
using point = std::pair<ll, ll>;

int main() {
    std::string a;
    int running_sum = 0;

    while (std::cin >> a) {
        std::string joined = "";
        bool is_first;
        char last;

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
        std::cout << running_sum;

        is_first=false;
        joined="";
        last = 0;
    }
}
