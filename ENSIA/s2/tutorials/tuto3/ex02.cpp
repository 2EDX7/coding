#include <iostream>
#include <map>
#include <string.h>
using namespace std;

class movie
{
private:
    string name, mpaa;
    map<int, int> pplRating;

public:
    movie(string nm, string m_paa, int one = 0, int two = 0, int three = 0, int four = 0, int five = 0)
    {
        name = nm;
        mpaa = m_paa;
        pplRating[1] = (one >= 0) ? one : 0;
        pplRating[2] = (two >= 0) ? two : 0;
        pplRating[3] = (three >= 0) ? three : 0;
        pplRating[4] = (four >= 0) ? four : 0;
        pplRating[5] = (five >= 0) ? five : 0;
    }
    string getName() const
    {
        return name;
    }
    string getMpaaRating() const
    {
        return mpaa;
    }
    int getPeopleRating(int rating)
    {
        // if the user rating  is not in our range of ratings then we will just return -1 to indicate an error
        if (rating > 0 && rating <= 5)
        {
            return pplRating[rating];
        }
        return -1;
    }
    string setMpaa(string m_paa)
    {
        mpaa = m_paa;
        return mpaa;
    }
    int addRating(int rating)
    {
        if (rating > 0 && rating <= 5)
            return ++pplRating[rating];
        return -1;
    }
    // int getAverage(void) const{

    // }
};

int main()
{
    movie interstellar("interstellar", "G", 23, 33, 44, 23, -1);
    cout << interstellar.getPeopleRating(5) << endl;
    // cout<<interstellar.setMpaa("PG-13")<<endl;
    // cout<<interstellar.getMpaaRating(); // trash code redo it.
    return 0;
}