#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> reverse_vector(vector<int> t)
{
    int n = t.size();
    vector<int> r(n);
    for (size_t i = 0; i < n / 2; i++)
    {
        r[i] = t[n - 1 - i];
    }
    return r;
}

bool is_palindrome(vector<int> t)
{
    int n = t.size();

    // dependent on reverse_vector function
    // this implementation implement code reusability best practice

    // vector<int> r = reverse_vector(t);
    // for (int i = 0; i < t.size()/2; i++)
    // {
    //     if(t.at(i)!= r.at(i)) return false;
    // }

    // independent of the first function
    // this reduces the complexity a bit, so in time; instead of using two for loops we use just one,
    //  also ths solution is more memory efficient since it doesn't declare another reversed vector
    for (int i = 0; i < t.size(); i++)
    {
        if (t.at(i) != t.at(n - i - 1))
            return false;
    }

    // the return line bellow is the same in both implementations.
    return true;
}

void print_vector(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
}
void print_vector(vector<string> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
}

vector<string> remove_non_digit_string(vector<string> v){
    auto i = v.begin();
    do
    {
        bool digit_exist = 0;
        for (int j = 0; j < (*i).length(); j++)
        {
            if (isdigit((*i)[j])) digit_exist =1; break;
        }
        if(!digit_exist) v.erase(i);
        i++;
    }while(i!=v.end());
    return v;
}

int main()
{
    vector<string> tst{"morocco fel galb", "1. allah", "2. elwatan", "3. elmalik","el amir"};
    print_vector(tst);
    cout << endl;
    tst = remove_non_digit_string(tst);
    print_vector(tst);

    // vector<int> v{1, 2, 2};
    // vector<int>::iterator t;
    // print_vector(v);

    // cout << v.capacity();

    // print_vector(v);
    // vector<int> result = reverse_vector(a);
    // for (int i = 0; i < result.size(); i++)
    // {
    //     cout<<result.at(i);
    // }
}
