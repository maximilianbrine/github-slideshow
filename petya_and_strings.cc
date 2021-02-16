#include <iostream>
#include <string>
#include <vector>

int scoreLetter(char l) {
    std::vector< char > alpha = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    int count = 0;
    for (char a : alpha) {
        ++count;
        if (a == tolower(l)) {
          return count;
        }
    }
    return 0;
}
int main() {
    
    std::string a, b;
    int ascore = 0, bscore = 0;
    std::cin >> a >> b;

    for (int i = 0; i < a.size(); ++i) {
        ascore = scoreLetter(a[i]);
        bscore = scoreLetter(b[i]);

        if (ascore == bscore) {
            continue;
        } else if (ascore > bscore) {
            std::cout << 1;
            return 0;
        } else if (bscore > ascore) {
            std::cout << -1;
            return 0;
        }        
    }  
    std::cout << 0;


    return 0;
}