#include <iostream>
#include "complex.h"

float complex::get_re(void)
{
    return re;
}
float complex::get_im(void)
{
    return im;
}
void complex::set_re(float a)
{
    re = a;
}
void complex::set_im(float b)
{
    im = b;
}
complex complex::add_two_complex(complex a, complex b)
{
    complex c;
    c.re = a.re + b.re;
    c.im = a.im + b.im;
    return c;
}
complex complex::substract_two_complex(complex a, complex b)
{
    complex c;
    c.re = a.re - b.re;
    c.im = a.im - b.im;
    return c;
}
complex complex::multiply_two_complex(complex a, complex b)
{
    complex c;
    c.re = a.re * b.re - a.im * b.im;
    c.im = a.re * b.im + b.re * a.im;
    return c;
}
void complex::print_complex(float a, float b)
{
    if (a != 0 && b != 0)
        std::cout << a << '+' << b << 'i';
    else if (a == 0 && b != 0)
        cout << b << 'i';
    else if (b == 0 && a != 0)
        cout << a;
    else
        cout << "0";
}


