#include <iostream>
#include <cmath>
using namespace std;
int main(){
    // // first method : using third variable 
    // int a, b, c;
    // cout<< "enter a "; cin>> a;
    // cout<< "enter b "; cin>> b;
    // cout <<"before: \n a=" <<a <<"\n" << " b=" <<b <<"\n";
    // c = b;
    // b = a;
    // a = c; 
    // cout << "after: \n a=" <<a <<"\n" << " b=" <<b;



    // // second method : without using third variable 
    // int a,b;
    // cout<< "enter a "; cin>> a;
    // cout<< "enter b "; cin>> b;
    // cout <<"before: \n a=" <<a <<"\n" << " b=" <<b <<"\n";
    // a = a ^ b;
    // b = a ^ b;
    // a = a ^ b;
    // cout << "after: \n a=" <<a <<"\n" << " b=" <<b;


    // third method : funtion 
    int a,b;
    cout<< "enter a "; cin>> a;
    cout<< "enter b "; cin>> b;
    cout <<"before: \n a=" <<a <<"\n" << " b=" <<b <<"\n";
    swap(a,b);
    cout << "after: \n a=" <<a <<"\n" << " b=" <<b;

    

    return 0;

}