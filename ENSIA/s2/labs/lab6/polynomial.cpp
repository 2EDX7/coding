#include "polynomial.h"
using std::cout;
using std::endl;
polynomial::polynomial (){

}
polynomial polynomial::operator+(const polynomial& a){
    polynomial result;

    for (int i:result.coefficients)
    {
        result.coefficients[i] =coefficients[i]+a.coefficients[i];    
    }
    return result;
}
// polynomial polynomial::operator-(const polynomial& ){

// }
// polynomial polynomial::operator*(const polynomial& ){

// }
// const polynomial polynomial::operator=(const polynomial& ){

// }
// polynomial polynomial::operator+=(const polynomial& ){

// }
// polynomial polynomial::operator-=(const polynomial& ){

// }
// polynomial polynomial::operator*=(const polynomial& ){

// }
void polynomial::addTerm(int exp, int coef){
    coefficients[exp]=coef;
}
void polynomial::printPolynomial(void){
    for(int i:coefficients){
        if(coefficients[i]!=0) cout<<coefficients[i]<<"X"<<"^"<<i<<" + ";
    }
}

// void polynomial::polynomial_combine (polynomial&){

// }
