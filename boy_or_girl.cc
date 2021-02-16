#include <iostream>
#include <string>
#include <set>

int main() {
    std::string user_name; std::cin >> user_name;
    std::set<char> u;

    for (auto l : user_name) {
        u.insert(l);
    }

    u.size() % 2 ? std::cout << "IGNORE HIM!" : std::cout << "CHAT WITH HER!";
    return 0;
}