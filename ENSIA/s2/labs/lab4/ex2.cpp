#include <iostream>
using namespace std;

class point{
    private:
        int x,y;
    public:
        point(int abs=0, int ord=0){
            x=abs;
            y=ord;
        }

        friend void display(const point& p) ; 
};

void display(const point& p){
    cout << p.x << ", " << p.y;
}

int main(){

    point a(3,7);
    display(a);
    cout << endl;
    return 0;
}
