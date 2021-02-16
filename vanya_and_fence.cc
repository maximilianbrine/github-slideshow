#include <iostream>

int main() {
    int n, h, w = 0; std::cin >> n >> h;

    for (int i = 0; i < n; ++i) {
        int p;
        std::cin >> p;
        p > h ? w+=2 : ++w;
    }
    std::cout << w;
    return 0;
}