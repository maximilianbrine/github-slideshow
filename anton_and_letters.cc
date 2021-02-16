#include <iostream>
#include <string>
#include <set>

int main() {
    std::string input; getline(std::cin, input);
    std::set<char> antons_set;
    for (int i = 1; i < input.size() - 1; ++i) {
        if (input[i] == ',' || input[i] == ' ') {
            continue;
        }
        antons_set.insert(input[i]);
    }

    std::cout << antons_set.size();

    return 0;
}