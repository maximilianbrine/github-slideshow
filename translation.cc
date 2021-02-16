#include <iostream>
#include <string>

int main() {
    std::string s, t; std::cin >> s >> t;
    int i = 0;
    int j = s.size() - 1;

    for (i; i < s.size(); ++i, --j) {
        if (s[i] != t[j]) {
            std::cout << "NO";
            return 0;
        }
    }
    std::cout << "YES";
    return 0;
}