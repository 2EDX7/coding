#pragma once
#include "point.h"
#include <iostream>

class segment{
    private:
        point start,end;
    public:
        segment(const point&, const point& );
        point getStart()const;
        point getEnd()const;
        void  setStart(const point&);
        void  setEnd(const point&);
        float length();
};