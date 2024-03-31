#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float angle1, angle2, angle3, anglesSum;
    cout<<"enter the angle 1 : ", cin>> angle1;
    cout<<"enter the angle 2 : ", cin>> angle2;
    cout<<"enter the angle 3 : ", cin>> angle3;
    anglesSum = angle1 + angle2 + angle3;
    if (anglesSum == 180 && angle1 >0 && angle2>0 && angle3>0  ) cout<<"the traingle is valid";
    else
    {
        cout<< "the traingle isn't valid, try to enter true values";
    }
    

}