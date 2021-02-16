#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    int w, x, y, z; std::cin >> w >> x >> y >> z;
    std::vector<int> n = {w, x, y, z};

    sort(n.begin(), n.end());

    int a, b, c;

    a = n[3] - n[0];
    b = n[1] - a;
    c = n[2] - a;

    std::cout << a << " " << b << " " << c << " " << std::endl;     
}