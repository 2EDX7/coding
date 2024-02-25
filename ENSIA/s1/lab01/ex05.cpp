// a program that calculates the area and the circumference of a circle based on the raduis entered by the user 
#include <iostream>
#include <cmath>
#include<string>
using namespace std;
int main(){
    
    double raduis, area, circumference;
    double const pi = 3.1415;
    string unit;
    cout << "enter the raduis of the circle "; cin>>raduis;
    cout<<"enter the unit:"; cin>>unit;

    area = pi*pow(raduis,2); 
    cout << "the area of this circle is: " <<area <<unit<<"^2 \n";

    circumference = 2*pi*raduis;
    cout << "the circumference of this circle is: " <<circumference <<unit;

    return 0; 
}