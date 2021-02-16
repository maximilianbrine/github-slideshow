#include <iostream>
#include <string>

int main() {
    std::string r, g, p; std::cin >> r >> g >> p;
    r += g;
    for (char c : r) {
        bool found = false;
        for (int i = 0; i < p.size(); ++i) {
            if (c==p[i]) {
                found = true;
                p[i] = '0';
                break;
            }
        }
        if (!found) {
            std::cout << "NO" << std::endl;
            return 0;
        }
    }

    for (char c : p) {
        if (c != '0') {
            std::cout << "NO" << std::endl;
            return 0;
        }
    }
    std::cout << "YES" << std::endl;
    return 0;
}