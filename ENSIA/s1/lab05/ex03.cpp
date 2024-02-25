#include <iostream>
using namespace std;

double monthlySave(double goal, float months);
double monthlySaveLimited(double goal, double salary,int perc=50);

int main()
{
    double goal, salary, perc;
    int months;
    cout << "whats your goal";
    cin >> goal;
    cout << "enter your salary: ";
    cin >> salary;
    cout << " how many percentage can be accessable (between 0 and 100): ";
    cin >> perc;
    months = monthlySaveLimited(goal, salary, perc);
    cout << "the minimum number of months is: " << months;
    return 0;
}

double monthlySave(double goal, float months)
{
    double monthlySave;
    monthlySave = goal / months;

    return monthlySave;
}
double monthlySaveLimited(double goal, double salary,int perc=50)
{

    double touchSalary, months;
    touchSalary = salary*perc/100;
    months = goal / touchSalary;

    return months;
}
