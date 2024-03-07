#include "IntegerSet.h"
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> a{-1,-2,55};
    IntegerSet A(a); // Initialize IntegerSet A
    vector<int> b{1,-2,55};
    IntegerSet B(b); // Initialize IntegerSet B
    
    A.printSet();
    cout<<"\n===================================================================================\n";
    // B.printSet();

    // cout<<A.isEqualTo(B)<<endl;
    // cout<<"\n===================================================================================\n";

    // (A.intersectionOfSets(B)).printSet();
    // cout<<"\n===================================================================================\n";
    
    // (A.unionOfSets(B)).printSet();
    // cout<<"\n===================================================================================\n";

    A.printSet();
    cout<<"\n===================================================================================\n";



}

