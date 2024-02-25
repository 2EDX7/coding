#ifndef complex_h
#define complex_h

#include <iostream>
using namespace std;

class complex{
    private:
        float re,im;
    public:
        complex();
        complex(float , float );
        float get_re(void);
        float get_im(void);
        void set_re(float );
        void set_im(float );
        complex add_two_complex(complex , complex );
        complex substract_two_complex(complex , complex );
        complex multiply_two_complex(complex , complex );
        void print_complex(float , float );
};


#endif