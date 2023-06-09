#include <iostream>
using namespace std;
// 匿名函数对象
void test01()
{
    // 匿名函数对象
    // 闭包的优点是可以在函数内部定义函数，可以在函数内部调用函数，可以在函数内部返回函数。
    cout << [](int v1, int v2) { return v1 + v2; }(10, 20) << endl;
}
int main()
{
    test01();
    int x = 100, y = 200;
    // 匿名函数对象,交换x,y的值
    // [&] 以引用的方式传递参数
    // [=] 以值的方式传递参数
    // []  不传递参数
    // [&x] 以引用的方式传递x参数
    // [=x] 以值的方式传递x参数
    [](int& a, int& b) { int temp = a; a = b; b = temp; }(x, y);
    cout << "x=" << x << ",y=" << y << endl;

    return 0;
}