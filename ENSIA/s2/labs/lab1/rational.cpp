#include <iostream>
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
                n = n/gcd(n,d);
                d = d/gcd(n,d);
            }
            numerator = n;
            denominator =d;
        } 
        int get_numerator(void){ return numerator;}
        int get_numerator(void) {return denominator;}
        rational add_two_rational(rational a, rational b){
            rational c,
            c.numerator = a.numerator*b.denominator + a.denominator*b.numerimator;
            c.denominator = a.denominator*b.denominator;    
            return c;
        }
        rational substract_two_rational(rational a, rational b){
            rational c,
            c.numerator = a.numerator*b.denominator - a.denominator*b.numerimator;
            c.denominator = a.denominator*b.denominator;    
            return c;
        }
        rational multiply_two_rational(rational a, rational b){
            rational c,
            c.numerator = a.numerator*b.numerimator;
            c.denominator = a.denominator*b.denominator;    
            return c;
        }
        auto divide_two_rational(rational a, rational b){
            if(b.numerator == 0) return "invalid";
            else{
                int temp_b_numerator = b.numerator;
                b.numerator = b.denominator;
                b.numerator = temp_b_numerator;
                return multiply_two_rational(rational a, rational b);
            }
        }
        void print_rational(int num , int den);
        void print_rational_float( int num, int den);
};

#endif