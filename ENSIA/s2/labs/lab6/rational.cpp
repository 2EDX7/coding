#include "rational.h"
using namespace std;

void rational::reduce(){
    numerator = numerator/gcd(numerator,denominator);
    denominator = denominator/gcd(numerator,denominator);
    if (numerator>0 and denominator<0){
        numerator = -1*numerator;
        denominator = -1*denominator;
    }
}

rational::rational(int n=0,int d=1){
    numerator = n;
    denominator = (d!=0)?d:1;
    reduce;
} 

int rational::get_numerator(void)const{ return numerator;}
int rational::get_denominator(void)const {return denominator;}
float rational::get_float_rep(void)const{return numerator/denominator;}

void rational::set_numerator(int n){ 
    numerator = n;
    reduce;
}
void rational::set_denominator(int d) {
    denominator = (d!=0)?d:1;
    reduce;
}

rational rational::operator+(const rational& b){
    rational r;
    r.numerator = numerator * b.denominator + b.numerator * denominator;
    r.denominator = denominator * b.denominator;
    r.reduce();
    return r;
}
rational& rational::operator+=(const rational& b){
    *this = *this +b;
    return *this;
}

rational rational::operator-(const rational& b){
    rational r;
    r.numerator = numerator * b.denominator - b.numerator * denominator;
    r.denominator = denominator * b.denominator;
    r.reduce();
    return r;
}
rational rational::operator-=(const rational& b){
    *this = *this - b;
    return *this;
}
rational rational::operator*(const rational& b){
    numerator = numerator * b.numerator;
    denominator = denominator * b.denominator;
    reduce;
    return *this;
}
rational rational::operator/(const rational& b) {
    if (b.numerator == 0) return *this;
    numerator = numerator * b.denominator;
    denominator = denominator * b.numerator;
    reduce;
    return *this;
}
rational rational::operator-(void){
    rational A(-1 * numerator, denominator);
    return A;
}
rational rational::operator+=(int a){
    numerator += a*denominator;
    reduce;
    return *this;
}

rational rational::operator++(void){
    numerator += denominator;
    return *this;
}
rational rational::operator++(int){
    rational temp(numerator,denominator);
    numerator+=denominator;
    return temp;
}
rational rational::operator--(void){
    numerator -= denominator;
    return *this;
}
rational rational::operator--(int){
    rational temp(numerator,denominator);
    numerator-=denominator;
    return temp;
}

bool rational::operator==(const rational& b)const{
    return (numerator * b.denominator) == (b.numerator * denominator);
}
bool rational::operator!=(const rational& b)const{
    return !(*this == b);
}
bool rational::operator>(const rational& b){
    return ((*this) - b).numerator > 0;
}
bool rational::operator<(const rational& b){
    return ((*this) - b).numerator < 0;
}
bool rational::operator>=(const rational& b){
    return ((*this) - b).numerator >= 0;
}
bool rational::operator<=(const rational& b){
    return ((*this) - b).numerator <= 0;
}

ostream& operator<<(ostream& out, const rational& a){
    if(a.get_numerator() == 0 ) out<<0<<endl;
    else if(a.get_denominator()==1 and a.get_numerator()==1) out<<1<<endl;
    else out << a.get_numerator() << "/" << a.get_denominator() <<endl;
}

istream& operator>>(istream &in, rational& a){
    int numerator, denominator;
    in >> numerator >> denominator;
    a.set_numerator(numerator);
    a.set_denominator(denominator);
    return in;
}

void rational::print(){
    cout << numerator << "/" << denominator;
}

void rational::print_float(){
    cout << static_cast<float>(numerator) / denominator;
}