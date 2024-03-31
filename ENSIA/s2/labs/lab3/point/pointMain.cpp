#include "point.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){

    point p1(3,5);
    point p2(-10,30);
    cout<<"the point p1 is at: "<<p1.getX()<<", "<<p1.getY()<<endl;
    cout<<"the point p2 is at: "<<p2.getX()<<", "<<p2.getY()<<endl;
    p1.translate(5.5,-12.5);
    cout<<"the point p1 is at: "<<p1.getX()<<", "<<p1.getY()<<endl;
    cout<<"the distance between p1 and p2 is: "<<p1.distance(p2)<<endl;
    return 0;
    
}