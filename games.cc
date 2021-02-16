#include <iostream>
#include <vector>

int main() {
    int n, h, a, ans = 0; std::cin >> n;
    std::vector<int> home, away;
    for (int i = 0; i < n; ++i) {
        std::cin >> h >> a;
        home.push_back(h);
        away.push_back(a);
    }

    for (int h_jersey : home) {
        for (int a_jersey : away) {
            if (h_jersey == a_jersey) {
                ++ans;
            }
        }
    }
    std::cout << ans;
    return 0;
}