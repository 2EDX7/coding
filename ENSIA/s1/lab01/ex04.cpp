// a program to find the perimeter of a rectangle 
#include <iostream>
#include<string>
using namespace std;
int main(){
    double length, width, perimeter;
    string unit; 
        cout <<"enter the length of the rectangle in : "; cin>> length;
        cout <<"enter the width of the rectangle in : "; cin>> width;
        cout <<"enter the unit : "; cin>> unit;

    if (length > 0  && width > 0 )
    {
        perimeter = (length + width)*2;
        cout<<"The perimeter of the rectangle is :  " << perimeter <<" "<<unit; 
    }
    else
    {
        cout<<"you entered wrong values, enter completely positive values";
    } 
    return 0; 
}