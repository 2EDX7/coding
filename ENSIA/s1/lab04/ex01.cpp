#include <iostream>
#include <cmath>
using namespace std;
void circle(double raduis, string unit);
int main()
{
    double raduis;
    string unit;
    cout << "enter the raduis of the circle: ";
    cin >> raduis;
    cout << "enter the unit: ";
    cin >> unit;
    circle(raduis, unit);
}

void circle(double raduis, string unit) {
    double const pi = 3.1415;
    double area, circumference, diameter;
    area = pi * pow(raduis, 2);
    cout << "\n\nthe area of this circle is: " << area << " " << unit << "^2\n";

    circumference = 2 * pi * raduis;
    cout << "the circumference of this circle is: " << circumference << " " << unit << " \n";

    diameter = raduis * 2;
    cout << "the diameter of this circle is: " << diameter << " " << unit << " \n";
}
