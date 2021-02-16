#include <iostream>
#include <string>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    
    std::vector<std::string> words;

    for (int i = 0; i < n; ++i) {
        std::string word;
        std::cin >> word;
        if (word.size() > 10) {
            words.push_back(word[0] + std::to_string(word.size() - 2) + word[word.size() - 1]);
        } else {
            words.push_back(word);

        }
    }

    for (std::string& a : words) {
        std::cout << a << std::endl;
    }
    return 0;
}