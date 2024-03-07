#include "IntegerSet.h"
#include <vector>
#include <iostream>
using std::cout;
using std::vector;


IntegerSet::IntegerSet(){
}

IntegerSet::IntegerSet(vector<int> A){
    for (int j = 0; j < A.size(); j++)
    {
        (A.at(j)>=0 and A.at(j)<100) ? set[j]=1 : set[j]=0;
    }
}

IntegerSet IntegerSet::unionOfSets(const IntegerSet& A) const{
    IntegerSet C;
    for (int i = 0; i < 100; i++)
    {
        (set[i]==1 || A.set[i] ==1) ? C.set[i]=1 : C.set[i] = 0;
    }
    return C;
}

IntegerSet IntegerSet::intersectionOfSets(const IntegerSet& A) const{
    IntegerSet C;
    for (int i = 0; i < 100; i++)
    {
        (set[i]==1 && A.set[i] ==1) ? C.set[i]=1: C.set[i]=0;
    }
    return C;
}

void IntegerSet::insertElement(int i){
    (i>0 and i<=100) ? set[i] = 1 : set[i]=0;
}

void IntegerSet::deleteElement(int d){
    if(d>=0 and d<100) set[d]=0;
}

void IntegerSet::inputSet(std::vector<int> A){
    for (auto j:A)
    {
        (j>=0 and j<100) ? set[j]=1 : set[j]=0;
    }
}

void IntegerSet::printSet()const{
    for (int i = 0; i < 100; i++) cout<<set[i]<<" "; // Replace 'cout' with 'std::cout'
}

bool IntegerSet::isEqualTo(const IntegerSet& A){
    for (int i = 0; i < 100; i++) if(set[i]!=A.set[i]) return false;
    return true;
}