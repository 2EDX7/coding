#include "traingle.h"
#include <iostream>
#include <string>
#include <cmath>

using std::cout;
using std::endl;
using std::string;

traingle::traingle(float fs = 0, float ss = 0, float ts = 0)
{
    fside = (fs >= 0) ? fs : 0;
    sside = (ss >= 0) ? ss : 0;
    tside = (ts >= 0) ? ts : 0;

    if (fside != 0 && sside != 0 && tside != 0)
    {
        if (fside + sside <= tside || fside + tside <= sside || sside + tside <= fside)
        {
            fside = 0;
            sside = 0;
            tside = 0;
        }
    }
}

void traingle::getSides(float &fs, float &ss, float &ts) const
{
    fs = fside;
    ss = sside;
    ts = tside;
}

float traingle::getPerimeter() const
{
    return fside + sside + tside;
}

float traingle ::getArea() const
{
    float p = getPerimeter() / 2.0;
    return sqrt(p * (p - fside) * (p - sside) * (p - tside));
}

void traingle::setSides(float fs, float ss, float ts)
{
    if (fs != 0 && ss != 0 && ts != 0)
    {
        if (fs + ss > ts && fs + ts > ss && ss + ts > fs)
        {
            fside = fs;
            sside = ss;
            tside = ts;
        }
    }
}
string traingle::traingleType() const
{
    if (fside == 0 && sside == 0 && tside == 0)
        return "non-valid";
    if (fside == sside && sside == tside)
        return "equilateral";
    if (fside == tside || fside == sside || sside == tside)
        return "isosceles";
    else
        return "scalene";
}

void traingle::printTraingleDetails() const
{
    cout << "Traingle: [" << fside << "-" << sside << "-" << tside << "]" << endl;
    cout << "Area: " << getArea() << endl;
    cout << "Perimeter: " << getPerimeter() << endl;
    cout << "Type: " << traingleType() << endl;
}
