#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

int main() {
    int n, i = 0, a, b, t = 0; std::cin >> n;
    std::vector<int> train;
    for (i; i < n; ++i) {
        std::cin >> a >> b;
        t += (a - b);
        train.push_back(t);
    }

    std::cout << abs(*min_element(train.begin(), train.end()));
    return 0;
}