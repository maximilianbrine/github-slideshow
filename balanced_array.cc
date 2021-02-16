#include <iostream>
#include <vector>

namespace {

void solve(int n) {
    std::vector<int> even;
    std::vector<int> odd;
    int sum_even = 0;
    int sum_odd = 0;
    for (int i = 1; i <= n/2; ++i) {
        even.push_back(2*i);
        sum_even += (2*i);
        odd.push_back(2*i -1);
        sum_odd += (2*i -1);
    }

    if ( (sum_even - sum_odd) % 2 == 0) {
        odd[n/2 -1] = odd[n/2 -1] + (sum_even - sum_odd);
        std::cout << "YES" << std::endl;   
        for(int e : even) {
            std::cout << e << " ";
        }
        for(int o : odd) {
            std::cout << o << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }
}

}  //  namespace

int main() {
    int t; std::cin >> t;
    while (t--) {
        int n; std::cin >> n;
        solve(n);
    }
    return 0;
}