#include<iostream>
using namespace std;
int main(){
    double number,result, multi=0;
    cout<<"enter a number"; cin>>number;
    while (multi<=10)
    {
        result = number*multi;
        cout<< number <<" * " <<multi <<" = " <<result <<endl;
        multi++;
    }
    
}
