#include <iostream>
#include <string>

int main() {
    std::string n; std::cin >> n;
    int lucky = 0;

    for (char c : n) {
        if (c == '4' || c == '7') ++lucky;
    }

    lucky == 4 || lucky == 7 ? std::cout << "YES" : std::cout << "NO";
    return 0;
}