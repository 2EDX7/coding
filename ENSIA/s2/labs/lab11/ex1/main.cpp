#include "Pair.h"

int main(){
    Pair<int,int> p(1,2);
    cout<<p.get_first() << " " << p.get_second() <<endl;

    Pair<double,double> p2(11.1,2.7);
    cout<<p2.get_first() << " " << p2.get_second() <<endl;

    Pair<std::string,int> p1("Zakaria",2);
    cout<<p1.get_first() << " " << p1.get_second() <<endl;



}