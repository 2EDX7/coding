
#include "Coins.h"

bool Coin10::toss() const {
    srand(time(0));
    return (rand() % 2) == 0; // 50% chance of heads
}

double Coin10::getValue() const {
    return 10.0; // Value of coin10
}

bool Coin20::toss() const {
    return (rand() % 2) == 0; // 50% chance of heads
}

double Coin20::getValue() const {
    return 20.0; // Value of coin20
}

bool Coin50::toss() const {
    return (rand() % 2) == 0; // 50% chance of heads
}

double Coin50::getValue() const {
    return 50.0; // Value of coin50
}

void evaluateToss(const Coin* coin) {
    std::cout << "Tossing the coin..." << std::endl;
    bool isHeads = coin->toss();
    std::cout << (isHeads ? "Heads" : "Tails") << "!" << std::endl;
}

