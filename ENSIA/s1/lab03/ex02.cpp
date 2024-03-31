#include <iostream>
#include <cmath>
using namespace std;
int main(){

    double a, b, c, delta, x1, x2, dx, Im1, Im2, Re;
    cout<<"enter a, b and c: "; cin>>a>>b>>c;
    delta = b*b - 4*a*c;

    if (delta>0)
    {
        x1 = ((-1*b) - sqrt(delta))/2*a;
        x2 = (-1*b + sqrt(delta))/2*a;
        cout<<"the roots are: \n x1: "<<x1 <<"\n" <<"and x2: "<<x2 <<"\n";
    }

    else if (delta == 0 )
    {
        dx = (-1*b)/2*a;
        cout<<"the double root is: "<<dx<<"\n";
    }

    else 
    {
        Re = (-1*b)/2*a;
        Im1 = (sqrt(-1*delta))/2*a;
        Im2 = -1*Im1;


        if (Im1<0)
        {
            cout<<"the roots are: \nx1 = "<<Re <<-1*Im1 <<" -i \n" ;
        }
        else
        {
            cout<<"the roots are: \nx1 = "<<Re <<Im1 <<" +i \n"; 
        }


        if (Im2<0)
        {
            cout<<"x2 = "<<Re  <<-1*Im2 <<" -i \n";
        }
        else
        {
            cout<<"x2 = "<<Re <<Im2 <<" +i \n";
        }

    }
    return 0;
}