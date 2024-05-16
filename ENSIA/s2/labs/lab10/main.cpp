#include <iostream>
#include <ctime>
#include "Coins.h"


int main() {

    double balance = 0.0;

    // Create instances of each type of coin
    Coin10 coin10;
    Coin20 coin20;
    Coin50 coin50;

    // Play the game until the balance reaches or exceeds 100.0
    while (balance < 100.0) {
        std::cout << "Current balance: DA" << balance << std::endl;

        // Toss all three coins
        evaluateToss(&coin10);
        if (coin10.toss())
            balance += coin10.getValue();

        evaluateToss(&coin20);
        if (coin20.toss())
            balance += coin20.getValue();

        evaluateToss(&coin50);
        if (coin50.toss())
            balance += coin50.getValue();
    }

    // Display the game result
    if (balance == 100.0) {
        std::cout << "Congratulations! You've won the game with a balance of DA100.0!" << std::endl;
    } else {
        std::cout << "Sorry, you've lost the game with a balance of DA" << balance << ". Better luck next time!" << std::endl;
    }

    return 0;
}
