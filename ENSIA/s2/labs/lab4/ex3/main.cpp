#include <iostream>

#include "../../lab1/rational.h"
#include "point.h"
#include "segment.h"

using namespace std;

int main(){
    rational p1X(2, 3);
    rational p1Y(6, 5);
    point p1(p1X, p1Y);

    rational p2X(3, 2);
    rational p2Y(4, 6);
    point p2(p2X, p2Y);

    segment  s(p1, p2);
    cout<<s.getStart();


    return 0;
}