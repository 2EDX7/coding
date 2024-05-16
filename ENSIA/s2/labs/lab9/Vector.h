#pragma once

#include <iostream>
#include <vector>

class Vector{
    private:
        int numOfVectors;
        std::vector<double> vector;

    public:
        Vector(int, std::vector<double> );

        std::vector<double> getVector() const;
        double getElement(int) const;
        int getNumOfVects() const;

        void setVect(std::vector<double>);
        void setElement(int , double);

        virtual Vector sumVect(const Vector&) const;
        virtual double prodVect(const Vector&) const;
        virtual Vector minsVect(const Vector&) const;

        virtual ~Vector() = default;
};