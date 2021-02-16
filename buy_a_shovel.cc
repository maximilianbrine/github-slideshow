#include <iostream>

int main() {
    int k, r; std::cin >> k >> r;
    int shovels = 1;
    while (1) {
        if (((k*shovels % 10) == 0) || (k*shovels - r)%10 == 0) {
            break;
        } else {
            ++shovels;
        }
    }
    std::cout << shovels << std::endl;
    return 0;
}