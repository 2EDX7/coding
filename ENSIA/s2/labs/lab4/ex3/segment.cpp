#include "segment.h"
#include <cmath>

segment::segment(const point& a, const point& b){
    start = a;
    end = b;
}
point segment::getStart()const{
    return start;
}
point segment::getEnd()const{
    return end;
}
void  segment::setStart(const point& a){
    start = a;
}
void  segment::setEnd(const point& b){
    end = b;
}
rational segment::length(){
    rational x2 =  end.getX();
    rational y2 =  end.getY();
    rational x1 = start.getX();
    rational y2 = start.getY();   
    return sqrt(pow(x2.subtract_rational(x1), 2) + pow(y2 - y1, 2));
}
