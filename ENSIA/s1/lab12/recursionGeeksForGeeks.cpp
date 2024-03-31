#include <iostream>
using namespace std;

void print_from_1_to_n(int n){
        if (n>1) print_from_1_to_n(n-1);
        cout<<n;
}
void print_from_n_to_1(int n){
    if(n>0) {
        cout<<n<<" ";
        print_from_n_to_1(n-1);
    }
    return;
}


int main(){
    print_from_n_to_1(7);
    return 0;

}