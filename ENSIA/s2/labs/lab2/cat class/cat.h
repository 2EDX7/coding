#ifndef cat_h
#define cat_h

#include <iostream>
#include <string.h>
using namespace std;

class cat{
    public:
        cat();
        cat(string , string , string );
        void getFurColor() const;
        void getEyeColor()const;
        void getHairColor()const;
        

    private:
        string furColor;
        string eyeColor;
        string hairColor;

        void setFurColor(string);
        void setEyeColor(string);
        void setHairColor(string);
};
bool checkoutFight(cat [], int );

#endif