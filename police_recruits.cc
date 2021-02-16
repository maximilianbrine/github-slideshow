#include <iostream>

int main() {
    int e; std::cin >> e;
    int cops = 0;
    int missed = 0;

    for (int i = 0; i < e; ++i) {
        int event; std::cin >> event;

        if (event > 0) {
            cops += event;
        } else if (event < 0 && cops <= 0) {
            ++missed;
        } else if (event < 0 && cops > 0) {
            --cops;
        }
    }

    std::cout << missed << std::endl;
    return 0;
}