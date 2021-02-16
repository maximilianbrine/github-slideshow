#include <iostream>

int main() {
    int n, k; std::cin >> n >> k;
    
    for (int i = 0; i < k; ++i) {
        n % 10 ? --n : n = n/10;
    }
    std::cout << n;
    return 0;
}