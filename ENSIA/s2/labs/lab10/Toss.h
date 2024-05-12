#pragma once

#include <iostream>
#include <cstdlib>
#include <ctime>

class Coin{
public:
    virtual bool toss() const;
    virtual double getValue() const  = 0;
};

class Coin10 : public Coin{
    public:
        double getValue() const;
};

class Coin20 : public Coin{
    public:
        double getValue() const;
};

class Coin50 : public Coin{
    public:
        double getValue() const;
};

void evaluateToss (Coin* coin);