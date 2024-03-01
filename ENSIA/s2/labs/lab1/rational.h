#ifndef rational_h
#define rational_h

#include <iostream>
#include <string>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

class rational{
    private:
        int numerator,denominator;
    
    public:
        rational(int n=0,int d=1){
            if(n!=0 && d!=0 && gcd(n,d)!=1){
                numerator = n/gcd(n,d);
                denominator = d/gcd(n,d);
            }
        } 

        int get_numerator(void){ return numerator;}
        int get_denominator(void) {return denominator;}

        void set_numerator(int n){ 
            if(n!=0 && gcd(n,denominator)!=1){
                numerator = n/gcd(n,denominator);
                denominator = denominator/gcd(n,denominator);
            }
        }
        void set_denominator(int d) {
            if(gcd(numerator,d)!=1){
                numerator = numerator/gcd(numerator,d);
                denominator = d/gcd(numerator,d);
            }
        }

        void add_rational(rational& b){
            numerator = numerator*b.denominator + denominator*b.numerator;
            denominator = denominator*b.denominator;    
        }

        void substract_rational(const rational& b){
            numerator = numerator*b.denominator - denominator*b.numerator;
            denominator = denominator*b.denominator;    
        }

        void multiply_by_rational(const rational& b){
            numerator = numerator*b.numerator;
            denominator = denominator*b.denominator;    
        }

        string divide_two_rational(const rational& b) {
            if (b.numerator == 0) return "invalid";
            numerator = numerator * b.denominator;
            denominator = denominator * b.numerator;
            return "";
        }

        void print(){
            cout<<numerator<<"/"<<denominator;
        }

        void print_float( ){
            cout<< static_cast<float>(numerator)/denominator;
        }
};

#endif