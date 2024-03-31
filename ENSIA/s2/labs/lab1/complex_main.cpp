#include <iostream>
#include "complex.h"
using  namespace std;

int main()
{
    complex a(1, -1);
    a.print_complex(a.get_re(),a.get_im());
    cout << endl;
}