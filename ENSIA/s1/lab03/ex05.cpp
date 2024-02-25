#include <iostream>
using namespace std;
int main()
{
    int num, sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        cout << "enter the number " << i << ": ";
        cin >> num;
        sum += num;
    }
    cout << "the sum of all numbers you entered is: " << sum;
}
