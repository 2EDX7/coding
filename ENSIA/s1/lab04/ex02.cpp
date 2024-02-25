#include <iostream>
#include <cmath>
using namespace std;
float a, b;
void swaping(float a, float b);

int main(void)
{
    cin >> a >> b;
    swaping(a, b);
    return 0;
}

void swaping(a, b)
{
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "a is: " << a << endl;
    cout << "b is: " << b << endl;
}
