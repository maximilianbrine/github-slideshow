#include <iostream>

int main() {
    int n, r; std::cin >> n;

    for (int i = 0; i < n; ++i) {
        std::cin >> r;
        if(r) {
            std::cout << "HARD";
            return 0;
        }
    }
    std::cout << "EASY";
    return 0;
}