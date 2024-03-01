#ifndef point_h
#define poinnt_h

#include "../../lab1/rational.h"
#include "../../lab3/point/point.h"

class point{
    private:
        rational X,Y;
    public:
        point( rational = rational(), rational =rational());

        rational getX() const;
        rational getY() const;
        void setX(rational x);
        void setY(rational y);
};

#endif