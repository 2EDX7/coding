#include <iostream>
using namespace std;

int main(){

    template <typename T> 
    T fun(T parameter1){
        cout<<"hello" << parameter1 ; 
    }

    return 0;
}