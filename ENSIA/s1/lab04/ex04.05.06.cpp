#include <iostream>
using namespace std;

bool prime(int num);
void primes(int fistart, int fiend);

int main()
{
    // EXO04:
    //  int num;
    //  cout << "enter a number: ";
    //  cin >> num;
    //  if (prime(num) == 2 && num > 1)
    //  {
    //      cout << "the number is prime";
    //  }
    //  else
    //  {
    //      cout << "the number isn't prime";
    //  }

    // EXO05:

    // int uistart, uiend;
    // cout << "enter the start and the end of the interval:";
    // cin >> uistart >> uiend;
    // primes(uistart, uiend);

// EXO06:
    int position, i = 1, num = 1, nthPrime;
    cout << "what's the nth prime number you want to know?: ";
    cin >> position;

    while (i <= position)
    {
        num++;
        if (prime(num) == true)
        {
            i++;
        }
    }
    cout << num;

    return 0;
}

bool prime(int num)
{
    int divisors = true;
    for (int div = 2; div <= num / 2; div++)
    {
        if (num % div == 0 || num < 2)
        {
            divisors = false;
            break;
        }
    }
    return divisors;
}
void primes(int fistart, int fiend)
{
    for (int num = fistart; num <= fiend; num++)
    {
        if (prime(num) == true && num > 1)
        {
            cout << num << " ";
        }
    }
}
