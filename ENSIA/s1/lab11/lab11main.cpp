#include <iostream>
#include <string.h>
#include "lab11.h"

using namespace std;

int main(){
    string text="Listen mom, you'll be proud of me    ";
    int j=-1;
    for (int i = 0; i < text.length()+1; i++)
    {
        cout<<text[j++];
    }
    cout<<" "<<j;
    return 0;
}