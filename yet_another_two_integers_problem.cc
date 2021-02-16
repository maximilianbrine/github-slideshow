#include <iostream>

namespace {

void solve () {
    int a, b; std::cin >> a >> b;
    int diff = abs(a - b);

    if (diff % 10 == 0) {
        std::cout << diff / 10 << std::endl;
    } else {
        std::cout << diff / 10 +1 << std::endl;
    }
}

}
int main() {
    int t; std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}