#include <iostream>
#include "cp.h"
using namespace std;

int main()
{
    array<int,5> a {1,2,3,5,5};
    cout<< a.front()<<endl; 
    cout<<a[2]<<endl;
    cout<<a.begin();
    return 0;
}