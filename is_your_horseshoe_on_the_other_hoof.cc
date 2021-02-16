#include <iostream>
#include <set>

int main() {
    int s;
    std::set<int> c;
    for (int i = 0; i < 4; ++i) {
        std::cin >> s;
        c.insert(s);
    }
    std::cout << 4 - c.size();
    return 0;
}