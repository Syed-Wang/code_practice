#include <iostream>
using namespace std;

// note:C++ 规定，在给定的作用域中只能指定一次默认参数。
void func(int a, int b, int c = 2);
void func(int a, int b =5, int c )
{
    cout << a << b << c << endl;
}

int main()
{
    func(1);

    return 0;
}

