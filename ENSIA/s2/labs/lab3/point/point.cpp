#include "point.h"
#include <iostream>
#include <cmath>

point::point(float x=0, float y=0){
    X = x;
    Y = y;
}
float point::distance(const point& B){
    return sqrt((B.X - X) * (B.X - X) + (B.Y - Y) * (B.Y - Y));
}
void point::translate (float x=0, float y=0){
    X += x;
    Y += y;
}
void point::setX(float x){
    X=x;
}
void point::setY(float y){
    Y=y;
}
float point::getX() const{
    return X;
}
float point::getY() const{
    return Y;
}
