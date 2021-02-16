#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int x, y, z; std::cin >> x >> y >> z;
    int min, max;
    std::vector<int> v {x,y,z};
    min = *std::min_element(v.begin(), v.end());
    max = *std::max_element(v.begin(), v.end());

    std::cout << max - min << std::endl;
}