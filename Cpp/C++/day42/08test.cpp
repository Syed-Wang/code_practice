#include <iostream>
#include <typeinfo>
using namespace std;

template <typename T>
void fun(T a)
{
    cout << typeid(a).name() << endl;
}
template <typename f, typename r, typename l>
void fun(f (*)(r, l))
{
    cout << typeid(f).name() << endl;
    cout << typeid(r).name() << endl;
    cout << typeid(l).name() << endl;
}

int add(int a, int b)
{
    return a + b;
}

int main()
{
    //fun(10);
    fun(add);

    return 0;
}