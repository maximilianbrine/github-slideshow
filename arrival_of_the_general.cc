#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n; std::cin >> n;

    std::vector<int> soldiers;
    for (int i = 0; i < n; ++i) {
        int s; std::cin >> s;
        soldiers.push_back(s);
    }
    
    std::vector<int>::reverse_iterator min = std::min_element(soldiers.rbegin(), soldiers.rend());
    std::vector<int>::iterator max = std::max_element(soldiers.begin(), soldiers.end());
    int min_distance = std::distance(soldiers.rbegin(), min);
    int max_distance = std::distance(soldiers.begin(), max);

    if ( (max_distance + min_distance) >= soldiers.size() ) {
        std::cout << max_distance + min_distance - 1  << std::endl;
    } else {
        std::cout << max_distance + min_distance << std::endl;
    }

    return 0;
}