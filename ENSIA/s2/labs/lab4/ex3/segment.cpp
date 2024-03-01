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
float  segment::length(){
    float x2 =  end.getX();
    float y2 =  end.getY();
    float x1 = start.getX();
    float y2 = start.getY();   
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}
