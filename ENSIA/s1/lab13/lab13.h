#ifndef lab13_h
#define lab13_h

//in this lib you'll be seing some functions using pointers    

#include<iostream>
using namespace std;


void mySwap(int* a, int* b){
    int tempa = *a;
    *a = *b;
    *b = tempa;
}

#endif