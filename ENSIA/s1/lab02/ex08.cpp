#include <iostream>
#include <string>
using namespace std;
int main(){
    int x,y;
    cout<<"enter x:"; cin>>x;
    cout<<"enter y:"; cin>>y;
    string result = (x>y) ? "x is the greater number" : "y is the greatest number";
    cout<< result;
}