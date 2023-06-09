#include <iostream>
using namespace std;
// note: 函数对象
class MyAdd {
public:
    int operator()(int v1, int v2) // 重载小括号运算符
    {
        return v1 + v2;
    }
};

int main()
{
    MyAdd add;
    cout << add.operator()(10, 20) << endl;
    cout << add(10, 20) << endl;
    return 0;
}
