#include <iostream>
#include <vector>

namespace cf_snake {

void printSnake(std::vector<char>& v) {
    for (auto& i : v) {
        std::cout << i;
    }
    std::cout << std::endl;
}

void incrementStage(int& stage) {
    if (stage < 4) {
        ++stage;
    } else {
        stage = 1;
    }
}

}  //  namespace cf_snake

int main() {
    int r, c, stage = 1, l = 0; std::cin >> r >> c;
    std::vector<char> snake, curve, rcurve;

    for (int i = 0; i < c; ++i) {
        snake.push_back('#');
        i != c - 1 ? curve.push_back('.') : curve.push_back('#');
        !i ? rcurve.push_back('#') : rcurve.push_back('.');
    }

    while (l < r) {
        switch (stage) {
            case 1:
                cf_snake::printSnake(snake);
              break;
            case 2:
                cf_snake::printSnake(curve);
              break;
            case 3:
                cf_snake::printSnake(snake);
              break;
            case 4:
                cf_snake::printSnake(rcurve);
             break;
        }
    cf_snake::incrementStage(stage);
    ++l;
    }
    return 0;
}