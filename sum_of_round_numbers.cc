#include <iostream>
#include <vector>

int main() {
    int n , t, k; std::cin >> t;
    
    for (int i = 0; i < t; ++i) {  
        std::cin >> n;
        k = 0;
        std::vector<int> ans;
        int d = 100000;
        while (n) {
            if (n <= 10) {
                ans.push_back(n);
                ++k;
                break;
            }
            while (!(n / d)) {
                d = d / 10;
            }
            if (n%d != 0) {
                ans.push_back(((n/d)*d));
            } else {
                ans.push_back(n);
            }
            ++k;
            n = n%d;
        }
        std::cout << k << std::endl;
        for (long unsigned int j = 0; j < ans.size(); ++j) {
            if (j != ans.size() - 1) {
                std::cout << ans[j] << " ";
            } else {
                std::cout << ans[j] << std::endl;
            }
        }
    }
    return 0;
}