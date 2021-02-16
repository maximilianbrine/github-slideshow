#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n; std::cin >> n;
    std::vector<int> scores;
    int amazing = 0;

    for (int i = 0; i < n; ++i) {
        int s; std::cin >> s;

        if (i) {
            int min = *std::min_element(scores.begin(), scores.end());
            int max = *std::max_element(scores.begin(), scores.end());
            if (s > max || s < min) {
                ++amazing;
            }
        }
        
        scores.push_back(s); 
    }

    std::cout << amazing << std::endl;
    return 0;
}