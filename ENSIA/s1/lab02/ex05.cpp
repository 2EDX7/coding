#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(){
    double years,months,weeks,days,hours,minutes,seconds;
    cout<<"enter the period in days: "; cin>>days;
    years= days/365; cout<<"the time you entered in years is approximately: " <<years <<" years\n";
    months= days/30; cout<<"the time you entered in months is approximately: " <<months <<" months\n";
    weeks= days/7; cout<<"the time you entered in weeks is approximately: " <<weeks <<" weeks\n";
    hours= days*24; cout<<"the time you entered in hours is approximately: " <<hours <<" hourse\n";
    minutes= hours*60; cout<<"the time you entered in minutes is approximately: " <<minutes <<" minutes\n";
    seconds= minutes*60; cout<<"the time you entered in seconds is approximately: " <<seconds <<" seconds\n";
    return 0;
}