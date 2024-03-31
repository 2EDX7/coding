#include <iostream>
using namespace std;
int main()
{
    double n;
    int N;
    cin >> n;
    if (n > 0)
    {
        N = n + 0.5;
    }
    else
    {
        N = n - 0.5;
    }
    cout << N<<".0";
}