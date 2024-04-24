#include <iostream>
#include <string>
#include <set>
using namespace std;

class Person {
public:
    Person(const string& nm, int ag) {
        name = nm;
        age = ag>0 ? ag : 0;
    }

    string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

private:
    string name;
    int age;
};


struct ComparePersons {
    bool operator()(const Person* p1, const Person* p2) const {
        return p1->getAge() < p2->getAge();
    }
};

int main() {
    multiset<Person*, ComparePersons> personsSet;

    
    Person person1("mohamed",14);
    Person person2("Alice",33);
    Person person3("John",34);
    Person person4("Mohamed",18);
    Person person5("Alice",67);
    Person person6("John",66);

    personsSet.insert(&person1);
    personsSet.insert(&person2);
    personsSet.insert(&person3);
    personsSet.insert(&person4);
    personsSet.insert(&person5);
    personsSet.insert(&person6);

    for (const auto& person : personsSet) {
        std::cout << person->getName() << ": " << person->getAge() << std::endl;
    }

    return 0;
}