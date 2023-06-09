#include <iostream>
using namespace std;
// note: 可以直接使用的函数叫函数实例，函数模板是一种特殊的函数，函数模板可以生成函数实例
template <typename T> // class是关键字，T是模板参数
T add(T a, T b)
{
    return a + b;
}
template <> // 显示具体化，只能针对某一种类型进行具体化(特化)，优先级高于自动类型推导
string add<string>(string a, string b)
{
    return a + b;
}

template <typename T> // typename是关键字(C++ 11)，T是模板参数
class A {
public:
    A(T a, T b)
    {
        this->a = a;
        this->b = b;
    }
    void print()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }

private:
    T a;
    T b;
};

int main()
{
    // int a = 10;
    // int b = 20;
    cout << add<double>(10.2, 11.1) << endl;
    string s1 = "hello";
    string s2 = "world";
    cout << add(s1, s2) << endl;

    return 0;
}