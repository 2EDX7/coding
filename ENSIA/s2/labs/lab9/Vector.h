#pragma once

#include <iostream>
#include <vector>

class Vector{
    private:
        int* numOfVectors;
        std::vector<double> vector;

    public:
        Vector(int*, std::vector<double> );

        std::vector<double> getVector() const;
        double getElement(int) const;
        int* getNumOfVects() const;

        void setVect(std::vector<double>);
        void setElement(int , double);

        Vector sumVect(const Vector&) const;
        Vector prodVect(const Vector&) const;
        Vector minsVect(const Vector&) const;

        ~Vector();
};

