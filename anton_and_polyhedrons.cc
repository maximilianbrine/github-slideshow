#include <iostream>
#include <string>

int main() {
    int n; std::cin >> n;
    long f = 0;
    std::string s; 
    for (int i = 0; i < n; ++i) {
        std::cin >> s;

        if (s == "Tetrahedron") {
            f += 4;
        } else if (s == "Cube") {
            f += 6;
        } else if (s == "Octahedron") {
            f += 8;
        } else if (s == "Dodecahedron") {
            f += 12;
        } else if (s == "Icosahedron") {
            f += 20;
        }
    }
    std::cout << f << std::endl;
    return 0;
}