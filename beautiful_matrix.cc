#include <iostream>
#include <math.h>
//#include <utility>


int main() {
    int x, y, v, x_c, y_c, ans = 0;
    for (y = 0; y < 5; ++y) {
        for (x = 0; x < 5; ++x) {
            std::cin >> v;
            if(v == 1) {
                x_c = x;
                y_c = y;
            }
        }
    }
    ans += abs(x_c - 2);
    ans += abs(y_c - 2);

    std::cout << ans;
    
    return 0;
}