#include<iostream>
#include<cmath>
using namespace std;
double distance(double xa,double ya,double xb,double yb);
int main(){
    double xa,ya,xb,yb;
    cout<<"enter xa: ";cin>>xa;
    cout<<"enter ya: ";cin>>ya;
    cout<<"enter xb: ";cin>>xb;
    cout<<"enter yb: ";cin>>yb;
    cout<<"the distance between A and B is: "<<distance(xa,ya,xb,yb);
}

double distance(double xa,double ya,double xb,double yb){
    double distance;
    distance = sqrt(pow(xb-xa,2)+pow(yb-ya,2));
    return distance;
}
