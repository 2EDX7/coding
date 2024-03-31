#ifndef traingle_h
#define traingle_h
#include <string>
using std::string;
class traingle{
    private:
        float fside, sside, tside;
    public:
    traingle(float, float, float);
    void getSides(float&, float&, float&) const;
    float getPerimeter() const;
    float getArea() const;
    void setSides(float, float, float);
    string traingleType() const;
    void printTraingleDetails()const;


};

#endif