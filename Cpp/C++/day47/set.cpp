#include <iostream>
#include <set>
using namespace std;
// set is a red-black tree

class Person {
public:
    string name;
    int age;
    Person(string name, int age)
        : name(name)
        , age(age)
    {
    }
    bool operator<(const Person& rhs) const
    {
        return this->age < rhs.age;
    }
    bool operator>(const Person& rhs) const
    {
        return this->age > rhs.age;
    }
};

int main()
{
    set<int> s; // sort in ascending order

    for (int i = 0; i < 10; i++) { // insert 10 random numbers
        s.insert(rand() % 100 + 1);
    }
    for (int i : s) { // print the set
        cout << i << " ";
    }
    cout << endl;

    //set<Person, greater<>> p; // sort in descending order
	set<Person, greater<Person>> p; // sort in descending order
    p.insert(Person("Mike", 40));
    p.insert(Person("Raj", 20));
    p.insert(Person("Vicky", 30));

    for (Person i : p) { // print the set
        cout << i.name << " " << i.age << endl;
    }

    return 0;
}