#include <iostream>
#include "lab13.h"
using namespace std;

int main()
{
    /* ex01:
        int *ptr = nullptr;
        int a = 10;
        ptr = &a;
        *ptr = 666;
        int w = *ptr;
        cout<<ptr << endl
            <<*ptr<< endl
            << a  << endl
            <<w   <<endl;

        int **ptr1 = &ptr;
        **ptr1 = 777;
     */

ex02:
    int a = 3;
    int b = 4;
    cout << a << b << endl;
    mySwap(&a, &b);
    cout << a << b << endl;

/*     ex03:
        double a[] = {1.2, 33, 334.4, 56, 5, 5, 5};
        int size = sizeof(a) / sizeof(double);
        double *ptr = a;
        for (int i = 0; i < size; i++)
        {
            cout << *(ptr + i) << ' ';
        }
    
 */
    /* ex04 */

    return 0;
}