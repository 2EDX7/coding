#include <iostream>
using namespace std;
int main()
{
    float N, max, occ = 1;
    cout << "enter the number 1: ";
    cin >> max;
    for (int i = 1; i < 10; i++)
    {
        cout << "enter the number " << i + 1 << ": ";
        cin >> N;
        if (N == max)
        {
            occ++;
        }
        else if(N>max)
        {
            max = N;
            occ = 1;
        }
    }
    cout << "\n\n the maximum number is: " << max << endl;
    cout << "it was repeated: " << occ << " times";
    return 0;
}