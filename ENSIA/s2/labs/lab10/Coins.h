#ifndef COINS_H
#define COINS_H

#include <cstdlib>
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class Coin {
public:
    virtual bool toss() const = 0; // head or tails
    virtual double getValue() const = 0;
    virtual ~Coin() {} // virtual destructor for polymorphism
};

class Coin10 : public Coin {
public:
    bool toss() const override;
    double getValue() const override;
};

class Coin20 : public Coin {
public:
    bool toss() const override;
    double getValue() const override;
};

class Coin50 : public Coin {
public:
    bool toss() const override;
    double getValue() const override;
};

void evaluateToss(const Coin* coin);



#endif 
