#include <iostream>
#include <vector>

int main() {
    int a, b, t, m; std::cin >> t;
    std::vector<int> answers;
    for (int i = 0; i < t; ++i) {
        m = 0;
        std::cin >> a >> b;

        if (a == b || a%b == 0) {
            answers.push_back(m);
            continue;
        } else if ( a < b) {
            m = b - a;
        } else if ( a > b) {
            m = abs( (a%b) - (b%a));
        }

        answers.push_back(m);
    }

    for (int ans : answers) {
        std::cout << ans << std::endl;
    }
    return 0;
}