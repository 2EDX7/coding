#include "point.h"
#include <iostream>

point::point( rational x = rational (), rational y = rational ()){
    X = x;
    Y = y;
}

rational point::getX() const{
    return X;
}
rational point::getY() const{
    return Y;
}
void point::setX(rational x){
    X = x;
}
void point::setY( rational y){
    Y = y;
}
