#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n; std::cin >> n;
    std::vector<int> c;
    for (int i = 0; i < n; ++i) {
        int p; std::cin >> p;
        c.push_back(p);
    }    

    int max = *std::max_element(c.begin(), c.end());

    int cost = 0;
    for (int person : c) {
        cost += (max - person);
    }

    std::cout << cost << std::endl;
    return 0;
}