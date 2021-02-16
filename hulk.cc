#include <iostream>
#include <string>

int main() {
    int n; std::cin >> n;
    std::string str = "I hate";

    for (int i = 1; i <= n; ++i) {
        if (i == 1) {
            continue;
        }
        if (i%2 == 0) {
            str += " that I love";
        } else {
            str += " that I hate";
        }
    }
    str += " it";
    std::cout << str;
    return 0;
}