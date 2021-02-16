#include <iostream>
#include <vector>

int main() {
    int n, k; std::cin >> n >> k;
    std::vector<int> players;
    for (int i = 0; i < n; ++i) {
        int y; std::cin >> y;
        if (y <= 5 - k) {
            players.push_back(y);
        }
    }
    std::cout << players.size() / 3 << std::endl;
    return 0;
}