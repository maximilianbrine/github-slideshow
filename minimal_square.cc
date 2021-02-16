#include <iostream>
#include <cmath>

void solve() {
    int l, w, ans; std::cin >> l >> w;

    if (l > w) {
        if (l > 2 * w) {
            ans = pow(l,2);
        } else {
            ans = pow(2*w,2);
        }
    } else if (w > l) {
        if (w > 2 * l) {
            ans = pow(w,2);
        } else {
            ans = pow(2*l,2);
        }
    } else {
        ans = pow(l+w,2);
    }
    std::cout << ans << std::endl;
}
int main() {
    int t; std::cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}