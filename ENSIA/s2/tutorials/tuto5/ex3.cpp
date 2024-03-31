#include <iostream>
using namespace std;

class Money {
    public:
        static int num_of_objects;
        static int num_of_object(){
            return num_of_objects;
        };
        Money(long dollars, int cents){
            all_cents = dollars*100 + cents;
            num_of_objects++;
        }

        Money(long dollars){
            all_cents = dollars*100;
            num_of_objects++;
        }

        Money(){
            all_cents = 0;
            num_of_objects++;
        }

        double get_value() const{
            return all_cents;
        }

        void input(){
            long dollars;
            int cents;
            cout<<"enter dollars: ";
            cin>>dollars;
            cout<<"enter cents: ";
            cin>>cents;
            all_cents = dollars*100+cents;
        }

        void output() const{
            cout<<"there are "<<all_cents<<" cents"<<endl;
        }

        static Money add(Money a,Money b){ 
            Money c(0,a.all_cents + b.all_cents);
            return  c;
        }
        static bool equal(Money a,Money b){
            if(a.all_cents == b.all_cents) return true;
            return false;
        }
    private:
        float all_cents;
};

int main(void){
    Money::num_of_objects = 0;
    Money a(9.1,23), b(9.1,23);
    a.output();
    b.output();
    Money c = Money::add(a,b);
    c.output();
    cout<<Money::equal(a,b);

    cout<<Money::num_of_object();
    return 1;
}

