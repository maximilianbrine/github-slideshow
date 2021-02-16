#include <iostream>
#include <string>

int main() {
    int n; std::cin >> n;
    std::string colors; std::cin >> colors;
    int r = 0;

    for (int i = 0; i < colors.size(); ++i) {
        if (colors[i] != colors[i + 1]) {
            continue;
        } else {
            ++r;
        }
    }
    std::cout << r;
    return 0;    
}