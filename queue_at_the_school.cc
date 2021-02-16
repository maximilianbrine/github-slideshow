#include <iostream>

int main() {
    int n, t; std::cin >> n >> t;
    char queue[n];

    for (int i = 0; i < n; ++i) {
        char s; std::cin >> s;
        queue[i] = s;
    }

    int elapsed = 0;
    while (elapsed < t) {
        for (int i = 0; i < n - 1; ++i) {
            if (queue[i] == 'B' && queue[i + 1] == 'G') {
                queue[i] = 'G';
                queue[i + 1] = 'B';
                ++i;
            }
        }
        ++elapsed;
    }

    for(char c : queue) {
        std::cout << c;
    }
    return 0;
}