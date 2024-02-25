#include <iostream>
using namespace std;
int main(){
    string letter;
    cout<<"enter the letter:"; cin>>letter;
    if (letter == "a" || letter == "e" ||letter == "o" ||letter == "u" ||letter == "i" )
    {
        cout<<"the letter is a vowel";
    }
    else
    {
        cout<<"the letter is a consonant";
    }
    
    
}