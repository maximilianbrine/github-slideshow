#include <iostream>
#include <vector>

int main() {
    int k, l, m, n, d, ans = 0;
    std::cin >> k >> l >> m >> n >> d;
    std::vector<int> hits = {k, l, m, n};

    for ( int i = 1; i <= d; ++i) {
        for (int h : hits) {
            if (i%h == 0) {
                ++ans;
                break;
            }
        }
    }
    std::cout << ans;
    return 0;
}