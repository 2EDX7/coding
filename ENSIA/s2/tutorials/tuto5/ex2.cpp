#include <iostream>
using namespace std;
class DayOfYear
{
public:
    DayOfYear(int the_month, int the_day)
    {
        month = the_month;
        day = the_day;
        check_date();
    }
    DayOfYear()
    {
        month = 1;
        day = 1;
    }
    void input()
    {
        cout << "Enter the month as a number: ";
        cin >> month;
        cout << "Enter the day of the month: ";
        cin >> day;
        check_date();
    }
    void output()
    {
        cout << "month = " << month
             << ", day = " << day << endl;
    }
    int get_month()
    {
        return month;
    }
    int get_day()
    {
        return day;
    }
    bool isBefore(DayOfYear other)
    {
        if (month < other.get_month())
            return true;
        if (month == other.get_month() && day < other.get_day())
            return true;
        return false;
    }

private:
    int month;
    int day;
    void check_date()
    {
        if (month < 1 || month > 12 || day < 1 || day > 31)
        {
            cout << "Illegal date. Aborting program." << endl;
            exit(1);
        }
    }
};
int main()
{
    DayOfYear today, bach_birthday(3, 21);
    cout << "Enter today's date:\n";
    today.input();
    cout << "Today's date is ";
    today.output();
    cout << "J.S. Bach's birthday is ";
    bach_birthday.output();
    if (today.isBefore(bach_birthday))
        cout << "J.S. Bach's birthday will be later this year.\n";
    else
        cout << "J.S. Bach's birthday has already occurred this year.\n";
    return 0;
}
