#include <iostream>
using namespace std;
int main()
{
    float quiz, midterm, finalScores, avg;
    
    cout << "enter your quiz, midterm and final scores marks out of 20: "; cin >> quiz >> midterm>> finalScores;
    if (0<quiz<20 && 0<midterm<20 && 0<finalScores<20 )
    {
        avg = (quiz*10 + midterm*30 + finalScores*60) / 20;
        cout<<"the average is: "<<avg<<"% \n";
        if (avg >= 90) {
            cout << "and the grade is: A";
        }
        else if (avg >= 70)
        {
            cout << "and the grade is: B ";
        }
        else if (avg >= 50)
        {
            cout << "and the grade is: C";
        }
        else
        {
            cout << "and the grade is: F";
        }
    }

    return 0;
}