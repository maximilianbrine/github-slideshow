#include <iostream>

int main() {
    int minutes = 4 * 60;
    int n, k; std::cin >> n >> k;
    int time = minutes - k;
    int expended = 0;
    for (int i = 1; i <= n; ++i) {
        expended += (i * 5);
        if (expended > time) {
            std::cout << i - 1 << std::endl;
            return 0;
        } else if (expended == time) {
            std::cout << i << std::endl;
            return 0;
        }
    }

    std::cout << n << std::endl;

    return 0;
}