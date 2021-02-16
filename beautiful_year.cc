#include <iostream>
#include <string>

int main() {
    int n; std::cin >> n;
    std::string s;
    bool beautiful = false;

    while (!beautiful) {
        ++n;
        s = std::to_string(n);

        beautiful = true;
        for (char d : s) {
            int count = 0;
            for (char c : s) {
                if(d == c) ++count;
            }
            if(count > 1) {
                beautiful = false;
                break;
            }
        }
    }
    std::cout << n;

    return 0;
}