#include <iostream>

int main() {
    int n, b = 0; std::cin >> n;
    
    if (n && n >= 100) {
        b += n / 100;
        n = n%100;
    }

    if (n && n >= 20) {
        b += n / 20;
        n = n%20;
    }

    if (n && n >= 10) {
        b += n / 10;
        n = n%10;
    }

    if (n && n >= 5) {
        b += n / 5;
        n = n%5;
    }

    if (n) {
        b+=n;
    }

    std::cout << b << std::endl;
    return 0;
}