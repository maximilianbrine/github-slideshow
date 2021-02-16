#include <iostream>
#include <set>

int main() {
    int n; std::cin >> n;
    if (n < 26) {
        std::cout << "NO" << std::endl;
        return 0;
    }

    std::set<char> l;

    for (int i = 0; i < n; ++i) {
        char w;
        std::cin >> w;
        l.insert(tolower(w));
    }

    l.size() == 26 ? std::cout << "YES" : std::cout << "NO";
    return 0;
}