#include <iostream>

int main() {
    int n;
    float r, oj = 0.0, tot = 0.0, d; std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::cin >> d;
        oj += d/100.0;
        tot += 1.0;
    }
    r = (oj/tot) * 100.;
    std::cout << r;
    return 0;
}