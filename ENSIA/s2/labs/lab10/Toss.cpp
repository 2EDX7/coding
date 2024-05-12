#include "Toss.h"
#include <unistd.h>
using namespace std;

bool Coin::toss() const {
    srand(time(0));
    bool result = rand() % 2 ;
}

double Coin10::getValue() const{
    return 10.0;
}

double Coin20::getValue() const{
    return 20.0;
}

double Coin50::getValue() const{
    50.0;
}

void evaluateToss (Coin* coin){
    if(coin->toss()){
        cout<<"Congratulations! You've got HEADS \n";
        if(coin->getValue()==10.0){
            cout<<"Coin10 worth 10DA";
        }
    }
}
