#include <iostream>
#include <string>

namespace {
    void solve(std::string& s) {
        std::string b;
        b += s[0];
        for (int i = 1; i < s.size() - 1; i+=2) {
            b+=s[i];
        }
        b+=s[s.size() -1];

        std::cout << b << std::endl;
    }

}

int main() {
    int t; std::cin >> t;

    while(t--) {
        std::string s; std::cin >> s;
        solve(s);
    }
    return 0;
}