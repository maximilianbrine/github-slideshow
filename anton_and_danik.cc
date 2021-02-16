#include <iostream>
#include <string>

int main() {
    int n, a = 0, d = 0;
    std::string s; 
    std::cin >> n >> s;

    for (char c : s) {
        c == 'A' ? ++a : ++d;
    }

    if (a > d) {
        std::cout << "Anton";
    } else if (d > a) {
        std::cout << "Danik";
    } else {
        std::cout << "Friendship";
    }
}