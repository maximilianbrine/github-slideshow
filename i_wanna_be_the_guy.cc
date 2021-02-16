#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n, n_p, n_q; std::cin >> n;
    std::vector<int> x , y;

    std::cin >> n_p;
    for (int i = 0; i < n_p; ++i) {
        int p;
        std::cin >> p;
        x.push_back(p);
    }
    std::cin >> n_q;
    for (int i = 0; i < n_q; ++i) {
        int q;
        std:: cin >> q;
        y.push_back(q);
    }

    for (int i = 1; i <= n; ++i) {
        if ( std::find(x.begin(), x.end(), i) != x.end() ) {
            continue;
        }

        if ( std::find(y.begin(), y.end(), i) != y.end() ) {
            continue;
        }   
        std::cout << "Oh, my keyboard!";
        return 0;  
    }
    std::cout << "I become the guy.";
    return 0;
}