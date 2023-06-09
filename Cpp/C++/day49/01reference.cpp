#include <iostream>
using namespace std;

int num = 50;

class A {
public:
    A();

private:
    int n;
    int& r;
};

A::A()
    : n(10)
    , r(num)
{
}

int main()
{
    A* a = new A();
    cout << sizeof(A) << endl;
    cout << hex << showbase << &a << endl;
    cout << hex << showbase << *((int*)a + 1) << endl;
    cout << *((int*)a + 1) << endl;
    cout << &num << endl;
    return 0;
}