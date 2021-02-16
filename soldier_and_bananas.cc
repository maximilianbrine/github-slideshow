#include <iostream>

int main() {
    int n, cost = 0, w, k, i = 1; std::cin >> k >> n >> w;

    for (i; i <= w; ++i) {
        cost += (k * i);
    }

    cost > n ? std::cout << cost - n : std::cout << 0;
    return 0;
}