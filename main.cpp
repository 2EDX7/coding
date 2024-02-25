#include <iostream>
using namespace std;

int main(){

    int a = 3; // 7 = 00000001
    int b = 6; // 6 = 00000110
    int bi_and = a&b;
    int bi_or = a|b;
    int bi_xor = a^b;
    int bi_not = ~a;
    int bi_left_shift = a<<1;
    int bi_right_shift = a>>1; 
    cout<<bi_and<<endl;   // & is the bitwise AND operator. It performs a bit by bit comparison of two numbers
    cout<<bi_or<<endl;
    cout<<bi_xor<<endl;
    cout<<bi_not<<endl;
    cout<<bi_left_shift<<endl;
    cout<<bi_right_shift<<endl;
    return 0;
}
