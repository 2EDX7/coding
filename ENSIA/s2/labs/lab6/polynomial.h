#pragma once

#include <iostream>
#include <cmath>

class polynomial{
    public:
        polynomial ();
        polynomial operator+(const polynomial& );
        polynomial operator-(const polynomial& );
        polynomial operator*(const polynomial& );
        const polynomial operator=(const polynomial& );
        polynomial operator+=(const polynomial& );
        polynomial operator-=(const polynomial& );
        polynomial operator*=(const polynomial& );
        void addTerm(int exp, int coef);
        void printPolynomial(void);

    private:
        int coefficients[100];
        void polynomial_combine (polynomial&);


};