#include <iostream>
#include <vector>

int main() {
    int n, k, a, ans = 0;
    std::vector<int> vec;

    std::cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        std::cin >> a;
        vec.push_back(a); 
    }
    for (int i = 0; i < n; ++i) {
        if (vec[k - 1] <= vec[i] && vec[i] > 0) {
            ++ans;
        }
    }
    std::cout << ans;
    return 0;
}