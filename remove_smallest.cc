#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int t; std::cin >> t;
    std::vector< std::vector<int> > problems;

    for (int cases = 0; cases < t; ++cases) {
        std::vector<int> p; int n;
        std::cin >> n;
        for (int num = 0; num < n; ++num) {
            int a; std::cin >> a;
            p.push_back(a);
        }
        problems.push_back(p);
    }

    for (std::vector<int>& problem : problems) {
        bool possible = true;
        sort(problem.begin(), problem.end());
        if (problem.size() > 1) {
            for (int i = 0; i < problem.size() - 1; ++i) {
                if ( abs(problem[i] - problem[i + 1]) <= 1 && (problem[i] <= problem[i+1]) ) {
                    continue;
                } else {
                    possible = false;
                    break;
                }
            }
        }
        possible ? std::cout << "YES" << std::endl : std::cout << "NO" << std::endl;
    }
    return 0;
}