#include <iostream>

int main() {
    int x, m = 0; std::cin >> x;

    while(x > 0) {
        ++m;
        x -= 5;
    }

    std::cout << m;
    return 0;
}