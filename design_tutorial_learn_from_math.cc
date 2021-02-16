#include <iostream>

int main() {
    int n; std::cin >> n;

    if (n%2 == 0) {
        bool composite = false;
        int a, b; a = n/2; b = n/2;
        while (!composite) {
            if (((a%2 == 0) && (b%2 == 0))) {
                composite = true;
            } else {
              a -= 1; b += 1;
            }
        }
        std::cout << a << " " << b << std::endl;

    } else {
        int a, b;
        a = n/2; b = n/2 +1;
        bool composite = false;

        while(!composite) {

            if ((a%2 == 0 || a%3 == 0) && (b%2 == 0 || b%3 == 0) ) {
                composite = true;
            } else {
                --a;
                ++b;
            }
        }
        std::cout << a << " " << b << std::endl;
    }
    return 0;
}