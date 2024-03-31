#include <iostream>
#include "date.h"

using std::cout;
using std::cin;
using std::endl;

int main(){
    const int MAXDAYS = 160;
    date date1(10,2,1998); //October 2, 1998
    date date2;

    cout<<"date1 = ";
    date1.print();
    cout<<"date2 = ";
    date2.print();
    cout<<endl;

    for(int loop=1; loop<=MAXDAYS; ++loop){
        date1.print();
        date1.nextDay();
    }
    return 0;
}