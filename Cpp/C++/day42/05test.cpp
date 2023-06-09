#include <iostream>

using namespace std;

class A {
public:
    A()
    {
        cout << "A" << endl;
    }
    ~A()
    {
        cout << "~A" << endl;
    }
    virtual void show()
    {
        cout << "A::show" << endl;
    }
};

class B : public A {
public:
    B()
    {
        cout << "B" << endl;
    }
    ~B()
    {
        cout << "~B" << endl;
    }
    void show()
    {
        cout << "B::show" << endl;
    }
};

int main()
{
    A* p = new B;
    p->show();
    cout << "---------------------" << endl;

    delete p;

    return 0;
}