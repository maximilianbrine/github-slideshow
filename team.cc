#include <iostream>

int main() {
  int n, ans, p, v, t;
  ans = 0;
  std::cin >> n;
  for (int i = 0; i < n; ++i) {
    std::cin >> p >> v >> t;
    if((p + v + t) >= 2) {
        ++ans;
    }
  }
  std::cout << ans;
}