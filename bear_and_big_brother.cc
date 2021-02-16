#include <iostream>

int main() {
    int a, b, y = 0; std::cin >> a >> b;
    while (a <= b) {
        ++y;
        a = a * 3;
        b = b * 2;    
    }

    std::cout << y;
    return 0;
}
