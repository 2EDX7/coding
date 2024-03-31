#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "enter the natural number x: ";
    cin >> x;
    string result = (x % 2 == 0) ? "x is even" : "x is odd";
    cout << result;
}