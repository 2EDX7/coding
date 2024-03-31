#include <iostream>
#include <crand>
using namespace std;
int main()
{
    srand(static_cast<unsigned>(time(0)));
    int randomnum, sum = 0, playerSum, max, end, start;

    cout << "how many numbers you want us to display ?: ";
    cin >> max;
    cout << "enter the start of the range of the numbers: ";
    cin >> start;
    cout << "enter the end of the range of the numbers:  ";
    cin >> end;

    for (int i = 1; i <= max; i++)
    {
        randomnum = (rand() % (end - start + 1)) + start;
        cout << randomnum << "\n";
        sum += randomnum;
    }

    cout << "what was the sum?: ";
    cin >> playerSum;

    if (playerSum == sum)
    {
        cout << "you won :)";
    }
    else
    {
        cout << "you lost ;)";
    }
    
    return 0;
}