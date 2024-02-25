#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(){
    double oldSalary, newSalary, raiseAmount, raispercentage;
    cout<<"enter your old salary in dolar: "; cin>>oldSalary;
    cout<<"enter your raise percentage : "; cin>>raispercentage;

    raiseAmount= oldSalary*raispercentage;
    newSalary= oldSalary+raiseAmount;

    cout<<"your raise amount is: " <<raiseAmount <<"$\n";
    cout<<"your new salary will be: " <<newSalary <<"$\n";

    if (raiseAmount>0)
    {
        cout<<"you deserved those dollars keep working to get more! \n";
    }
    else if (raiseAmount == 0)
    {
        cout<<"work harder to get an increase in your salary! \n";
    }
    else if (raiseAmount<0)
    {
        cout<<"be carful, you should work hard to save your salary!! \n";
    }
    
    

}