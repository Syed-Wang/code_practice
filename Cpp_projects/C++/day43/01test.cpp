#include <iostream>
using namespace std;

int main()
{
    const int a = 10;
    int* p = (int*)&a;
    *p = 20; // C++无法通过指针修改常量的值，因为在编译时期就发生了值的替换
    cout << a << endl;

    return 0;
}