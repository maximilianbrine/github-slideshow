#include <iostream>

int main() {
    int n, t, i; std::cin >> t;

    for (i = 0; i < t; ++i) {
        std::cin >> n;
        if (n < 3) {
            std::cout << 0 << std::endl;
            continue;
        }

        std::cout << (n - 1) / 2 << std::endl;
    }
    return 0;
}