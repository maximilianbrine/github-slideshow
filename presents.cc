#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n, i = 1, p; std::cin >> n;
    std::vector<std::pair<int,int>> v;

    for (i; i<=n; ++i) {
      std::cin >> p;
      v.push_back(std::make_pair(p,i));
    }

    sort(v.begin(), v.end(), [](std::pair<int,int>& a, std::pair<int,int>& b) {
        return a.first < b.first;
    });

    for (std::pair<int,int>& ans : v) {
        std::cout << ans.second << " ";
    }
    return 0;
}