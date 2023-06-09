#include <iostream>

using namespace std;

class A {
public:
    A(int a)
    {
    }
};
class Stu {
private:
    string name;
    int age;
    static int count;
    int* p;
    const int id;
    A a;

public:
    Stu(string name, int age, int id)
        : name(name)
        , age(age)
        , p(new int[1024])
        , id(id)
        , a(A(10))
    {
        cout << "Stu()" << endl;
    }
    ~Stu()
    {
        delete[] p;
        p = nullptr;
        cout << "~Stu()" << endl;
    }
};
int Stu::count = 0;

int main()
{
    Stu s("zhangsan", 20, 1001);
    Stu* p = new Stu("lisi", 30, 1002);
//!    cout << Stu::count << endl;
    delete p;
    p = nullptr;

    return 0;
}