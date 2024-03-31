#include "cp.h"
using namespace std;
void post_increment(int a){
    cout<< ++a <<endl;
}
void pre_increment(int a){
    cout<< a++ <<endl;
}


int main (){
    post_increment(5);
    pre_increment(5);
    return 0;
}