#include <iostream>

int main() {
    int a, b, r; std::cin >> a >> b;
    
    if (a == b) {
        std::cout << a << " 0" << std::endl;
        return 0;
    } else if ( a > b ) {
        std::cout << b << " ";
    } else if ( a < b ) {
        std::cout << a << " ";
    }

    r = abs(a - b);
    if (r > 1) {
        std::cout << r/2;
    } else {
        std::cout << 0;
    }
    return 0;
}