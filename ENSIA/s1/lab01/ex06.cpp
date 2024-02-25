/* a program that calculates calculate and display the volume of a CUBE having its height , width
and depth  */ 
#include <iostream>
#include <cmath>
#include<string>
using namespace std;
int main(){
    double height, width, depth;
    string unit;
    cout<<"enter the height :"; cin>> height;
    cout<<"enter the width :"; cin>> width;
    cout<<"enter the depth :"; cin>> depth;
    cout<<"enter the unit :"; cin>> unit;
    if (height > 0 && width > 0 && depth> 0 ){ 
        cout<< "the volume of this cube is: " << height*width*depth <<unit<<"^3";
    }
    else{
        cout<< "you entered wrong values, try to enter completely positive value except zero";
    }

    return 0;

}