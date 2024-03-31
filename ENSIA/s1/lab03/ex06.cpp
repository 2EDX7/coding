#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    // int N, oddSum = 0;
    // cout << "enter N: ";
    // cin >> N;
    // for (int i = 0; i <= N; i++)
    // {
    //     if (i % 2 != 0)
    //     {
    //         oddSum += i;
    //     }
    // }
    // cout << oddSum;

    int N, oddSum = 0, count, i = 0;
    cout << "how many odd numbers you want to enter: ";
    cin >> count;
    while (i < count)
    {
        cout << "enter a number N: ";
        cin >> N;
        if (N % 2 != 0)
        {
            oddSum += N;
            cout << "the sum is: " << oddSum << "   ... \n";
            i++;
        }
    }
    cout << "the final sum of odd numbers are: " << oddSum;
}