#include<iostream>
using namespace std;
int main(){
    double aglebraMark, dsaMark, analysisMark, iteMark, englishMark, totalMarks, avrg;
    cout<<"enter your mark in algebra out of 20: "; cin>> aglebraMark;
    cout<<"enter your mark in  data structure and algorithms out of 20: "; cin>> dsaMark;
    cout<<"enter your mark in  analysis out of 20: "; cin>> analysisMark;
    cout<<"enter your mark in  ITE out of 20: "; cin>> iteMark;
    cout<<"enter your mark in  english out of 20: "; cin>> englishMark;
    totalMarks = aglebraMark + dsaMark + analysisMark + iteMark + englishMark;
    avrg = totalMarks/5;
    cout<<"your total marks is :" <<totalMarks <<endl;
    cout<<"your total average is :" <<avrg <<endl;
    cout<<"your total percent scored is :" <<totalMarks <<"% \n";
}