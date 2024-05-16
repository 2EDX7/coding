#ifndef pair_h
#define pair_h

#include <iostream>
#include <string.h>

using std::cin;
using std::cout;
using std::endl;

template<typename t1, typename t2>
class Pair
{
    public:
        Pair(const t1& f, const t2& s) : first(f), second(s) {}
        const t1& get_first() const { return first;}
        const t2& get_second() const { return second;}

    private:
        t1 first;
        t2 second;
};

template < typename t1, typename t2>
void print_pair(const Pair<t1,t2> p){
    cout<< '(' <<p.get_first() << ", " << p.get_second() << ")\n";
}

#endif pair_h