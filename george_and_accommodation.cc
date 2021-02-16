#include <iostream>

int main() {
    int n, p, q, i = 0, r = 0; std::cin >> n;

    for (i; i < n; ++i) {
        std::cin >> p >> q;
        if ((q - p) >= 2) {
            ++r;
        }
    }
    std::cout << r << std::endl;
    return 0;
}