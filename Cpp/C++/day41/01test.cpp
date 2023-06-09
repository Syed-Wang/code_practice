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
    // 虚函数
    virtual void show()
    {
        cout << "name:" << this->name << " age:" << this->age << endl;
    }
};
class Stu : public Person {
private:
    int id;

public:
    Stu(string name, int age, int id)
        : Person(name, age)
    {
        this->id = id;
    }
    // 重写父类的虚函数
    void show() override
    {
        //bug:cout << "name:" << this->name << " age:" << this->age << " id:" << this->id << endl;
    }
};

int main()
{
    Person* p = new Stu("张三", 18, 1001);
    p->show();

    return 0;
}