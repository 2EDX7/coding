#pragma once

#include <iostream>
#include <istream>
#include <ostream>
#include <cmath>
#include <string>


int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

class rational{
    protected:
        int numerator,denominator;
        void reduce();

    public:
        rational(int ,int );

        int get_numerator(void)const;
        int get_denominator(void)const;
        float get_float_rep(void)const;
        
        void set_numerator(int );
        void set_denominator(int );

        rational operator+(const rational& );
        rational& operator+=(const rational& );
        rational operator-(const rational& );
        rational operator-=(const rational& );
        rational operator*(const rational& );
        rational operator/(const rational& );
        rational operator-(void);
        rational operator+=(int );
        rational operator++(void);
        rational operator++(int );
        rational operator--(void);
        rational operator--(int);

        friend ostream& operator<<(ostream &, const rational& );
        friend istream& operator>>(istream &, rational& );

        bool operator==(const rational&)const;
        bool operator!=(const rational&)const;
        bool operator>(const rational&);
        bool operator<(const rational&);
        bool operator>=(const rational&);
        bool operator<=(const rational&);


        void print();
        void print_float( );
};
