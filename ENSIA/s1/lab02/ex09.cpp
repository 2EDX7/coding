#include <iostream>
using namespace std;
int main(){
    double x,y,z,a,result; string b,c;
    cout<<"enter x: "; cin>>x;
    cout<<"enter y: "; cin>>y;
    cout<<"enter z: "; cin>>z;
    a = (x>y)?x:y;
    b = (x>y)?"x":"y";
    result = (a>z)?a:z;
    c = (a>z)?b:"z";
    cout<<"the greatest number is "<<c <<" = " <<result;
}