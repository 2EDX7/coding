#include <iostream>
using namespace std;
int decimalToBinary(int num);

int main()
{
    int n;
    cin >> n;
    cout << decimalToBinary(n);
    return 0;
}
int decimalToBinary(int num)
{
    int binarNumber = 0, bit = 0, position = 1;
    while (num / 2 > 0)
    {
        bit = num % 2;
        binarNumber = binarNumber + position * bit;
        num /= 2;
        position *= 10;
    }
    binarNumber = position * num + binarNumber;

    return binarNumber;
}
