#include <iostream>
#include <iomanip>
using namespace std;

class AltMoney {
    public:
        AltMoney(int d=0, int c=0) {
            setAll(d, c);
        }
        void setAll(int d, int c) {
            dollars = d;
            cents = c;
        }
        int getDollars() const {
            return dollars;
        }
        int getCents() const {
            return cents;
        }

        // task 2:
        AltMoney operator+(const AltMoney& B){
            dollars += B.dollars;
            cents += B.cents;
            return *this;
        }
        AltMoney operator-(const AltMoney& B){
            dollars -= B.dollars;
            cents -= B.cents;
            return *this;
        }
        bool operator<(const AltMoney& B){
            if(dollars == B.dollars and cents == B.cents) return true;
            return false;
        }
        bool operator>(const AltMoney& B){
            return !(*this<B);
        }
        bool operator==(const AltMoney& B){
            return dollars==B.dollars and cents == B.cents;
        }

        // task 3:
        AltMoney operator++(int ){
            cents +=1;
            return *this;
        }
        AltMoney operator--(int ){
            cents = (cents-1<0) ? 0 : cents-1;
            return *this;
        }
        
        // task 4:
        friend ostream& operator<<(ostream& output, const AltMoney& A);
        friend istream& operator>>(istream& output,  AltMoney& A);
    private:
        int dollars;
        int cents;
};
        ostream& operator<<(ostream& output, const AltMoney& A){
            output <<'$'<<A.dollars<<'.'<<A.cents;
            return output;
        }
        istream& operator>>(istream& input, AltMoney& A) {
            // input.ignore();

            // int dollars_length = 0;
            // char d;
            // while (input.get(d) && d != '.') dollars_length++;
            // input >> setw(dollars_length) >> A.dollars;

            // input.ignore();

            // int cents_length = 0;
            // char c;
            // while (input.get(c)) cents_length++;
            // input >> setw(cents_length) >> A.cents;
            
            // return input;
            string s;
            input>>s;
            int i=1;
            while (s[i]!='.') {
                A.dollars= A.dollars*10 + int(s[i]);
                i++;
            }
            i++;
            while (i<=s.length()) {
                A.cents= A.cents*10 + int(s[i]);
            };

            return input;
        }

int main(){

    AltMoney m1;

    cout << "Enter the first amount of money: ";
    cin >> m1;

    cout << "The first amount of money is: " << m1 << endl;

    return 0;
}