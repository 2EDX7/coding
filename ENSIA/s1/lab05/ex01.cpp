#include <iostream>
#include <cmath>

using namespace std;

double sqrtFunction(double x, bool isdefined);
int main()
{
    double x, result;
    bool isdefined;
    cin >> x;
    result = sqrtFunction(x, &isdefined);
    cout << result << endl;
    cout << isdefined;
    return 0;
}

double sqrtFunction(double x, bool isdefined)
{
    double h = (x - 1) * (x - 2);
    if (h >= 0)
    {
        isdefined = true;
        return sqrt(h);
    }
    else
    {
        isdefined = false;
        return -3;
    }
}
