#include <iostream>
#include <string>

int main() {
    int n, x = 0; std::cin >> n;

    for (int i = 0; i < n; ++i) {
        std::string input;
        std::cin >> input;

        if (input == "X++" || input == "++X") {
            ++x;
        } else if (input == "--X" || input == "X--") {
            --x;
        }
    }
std::cout << x;
    return 0;
}