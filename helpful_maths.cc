#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {
    std::string input; std::cin >> input;
    std::vector<char> parsed;
    for (auto &s : input) {
        if(s != '+') {
            parsed.push_back(s);
        }
    }
    sort(parsed.begin(), parsed.end());
    
    for (int i = 0; i < parsed.size(); ++i) {
        std::cout << parsed[i];
        if (i != parsed.size() -1 ) {
            std::cout << '+';
        }
    }
    return 0;
}