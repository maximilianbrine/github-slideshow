#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string s; std::cin >> s;
    int u = 0, l = 0;

    for (char c : s) {
        isupper(c) ? ++u : ++l;
    }

    if (l >= u) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    } else {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }

    std::cout << s << std::endl;

    return 0;
}