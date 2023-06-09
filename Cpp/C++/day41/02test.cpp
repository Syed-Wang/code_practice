#include <iostream>

using namespace std;

class A {
public:
    virtual void show()
    {
        cout << "A::show()" << endl;
    }
};
class B : public A {
public:
    void show() override
    {
        cout << "B::show()" << endl;
    }
};

int main()
{
    A* p = new B;
    p->show();

    return 0;
}