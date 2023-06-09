#include <iostream>

using namespace std;

class Person {
private:
    string name;
    int age;

public:
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    void show()
    {
        cout << name << " " << age << endl;
    }
    friend class Student;
};
class Student : public Person {
private:
    int id;

public:
    Student(string name, int age, int id)
        : Person(name, age)
    {
        this->id;
    }
    void show()
    {
        cout << name << " " << age << " " << id << endl;
    }
};

int main()
{
    Person* p = new Student("Tom", 18, 1001);
    p->show();
    cout << "------------------------------" << endl;
    Person* p1 = new Person("lisi", 20);
    p1->show();
    ((Student*)p1)->show();
    // 静态装换static_cast向下转换不安全
    static_cast<Student*>(p1)->show();
    cout << "------------------------------" << endl;
    // 向下转型时，不合法
    //Student* p2 = new Person("zhang", 21);

    return 0;
}