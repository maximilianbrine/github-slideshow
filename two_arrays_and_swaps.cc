#include <iostream>
#include <vector>
#include <algorithm>

namespace {

void solve(int n, int& k) {
    std::vector<int> a, b;
    for (int i = 0; i < n; ++i) {
        int val; std::cin >> val;
        a.push_back(val);
    }

    for (int i = 0; i < n; ++i) {
        int val; std::cin >> val;
        b.push_back(val);
    }

    while (k--) {

        std::vector<int>::iterator min_a = std::min_element(a.begin(), a.end());
        std::vector<int>::iterator max_b = std::max_element(b.begin(), b.end());

        if (*max_b <= *min_a) {
            break;
        }
        *min_a = *max_b;
        *max_b = 0;


    }        
    
    int sum = 0;
    for (int num : a) {
        sum += num;
   }
   std::cout << sum << std::endl; 
}

}  //  namespace


int main() {
    int t; std::cin >> t;
    while (t--) {
        int n, k; std::cin >> n >> k;
        solve(n,k);
    }
    return 0;
}