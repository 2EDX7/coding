#include "DoubleSubscriptedArray.h"

using std::string;

void main(){ 

    DoubleSubscriptedArray<string> A(2,2);
    cout<<A(1,1);

}