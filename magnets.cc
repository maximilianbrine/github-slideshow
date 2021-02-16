#include <iostream>

int main() {
    int n, c, g = 0; std::cin >> n;
    if(n) ++g;

    for ( int i = 0; i < n; ++i) {
        int m; std::cin >> m;
        if(!i) {
            c = m;
            continue;
        }
        if (m != c) {
            ++g;
            c = m;
        }
    }
    std::cout << g;
    return 0;
}