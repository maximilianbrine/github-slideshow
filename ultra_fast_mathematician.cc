#include <iostream>
#include <string>

int main() {
    std::string a, b, c = ""; 
    std::getline(std::cin, a);
    std::getline(std::cin, b);
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            c += "1";
        } else {
            c += "0";
        }
    }
    std::cout << c;
    return 0;
}