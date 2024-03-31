#include <iostream>
using namespace std;
int main()
{

    int N, sum = 0, i = 0;
    double avg;
    do
    {
        cout << "enter a number N: ";
        cin >> N;
        if (N > 0)
        {
            sum += N;
            i++;
        }
        else if (N < 0)
        {
            while (N < 0)
            {
                cout << "ERROR, enter a strictly positive number:";
                cin >> N;
            }
            sum += N;
            i++;
        }
    } 
    while (N != 0);
    if (i!=0)
    {
        avg = (double)sum / i;
        cout << "the mean of all numbers is: " << avg;
    }
    else
    {
        cout<<"there is no avg";
    }
    
    

}